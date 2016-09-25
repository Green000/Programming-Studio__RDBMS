#include "Table.h"


using namespace std;

Table :: Table(string new_name, vector<Attribute> new_att, vector<string> new_id)
{
	
	name = new_name;
  	att = new_att;
  	id = new_id;
}
Table::Table()
{
	name = "Name";
	att = vector<Attribute>();
	id = vector<string>();
}

string Table:: getName()
{
	return name;
}

/*
 void addAttribute(Attribute t)
 {
 	tuple.push_back(t);
 }
*/
// vector <Attribute> Table :: getAttributes();
// {
	// return att;
// }
Table::Table (const Table& table)
{
	name = table.name;
	att = table.att;
	id = table.id;
	
}
ostream& Table :: Write(ostream& output)
{
	output << name << endl;
	for (int i =0; i < att.size(); i++)
	{
		att[i].Write(output);
	}
	output << "END" << endl;
	return output;
	
 }
istream& Table :: Read(istream& input)

{
	//TODO:finish it
	int i = 0;
	while(input){
	    att[i].Read(input);
	    i++;
	}
	return input;
}


istream& operator >> (istream& input, Table& table)
{
	table.Read(input);
	return input;
}

ostream& operator << (ostream& output, Table& table)
{
	table.Write(output);
	return output;
}
