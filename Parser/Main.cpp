

#include "Parser.h"
#include "Table.h"
#include "Engine.h"
#include "Token_stream.h"
#include "Token_Sym.h"


<<<<<<< HEAD
/*
TEST_CASE("Insert_test", "[insert]") {

	cout << "================================================================"<< endl;
	cout << "==================Parser Test==================================="<< endl;
=======
TEST_CASE( "Parsing tests", "[input]" ) {
>>>>>>> 09d0afb46771323c18dd94affa7a57913ab7869a

	Parser parser;
	parser.input();
	Table new_table = parser.e.findTable("animals");

	cout << "-------------------Create test----------------------------" << endl;
	//CREATE TABLE animals (name VARCHAR(20), kind VARCHAR(8), years INTEGER) PRIMARY KEY (name, kind);	
	
	REQUIRE(new_table.att[0].name == "name");
	REQUIRE(new_table.att[1].name == "kind");
	REQUIRE(new_table.att[2].name == "years");
	REQUIRE(new_table.id[0] == "name");

	cout << "-------------------Insert test----------------------------" << endl;
    /*INSERT INTO animals VALUES FROM ("Joe", "cat", 4);
	INSERT INTO animals VALUES FROM ("Spot", "dog", 10);
	INSERT INTO animals VALUES FROM ("Snoopy", "dog", 3);
	INSERT INTO animals VALUES FROM ("Tweety", "bird", 1);
	INSERT INTO animals VALUES FROM ("Joe", "bird", 2);*/
<<<<<<< HEAD
/*
	Table new_table = parser.e.findTable("animals");
=======
>>>>>>> 09d0afb46771323c18dd94affa7a57913ab7869a

	REQUIRE(new_table.att[0].data[3] == "Tweety");
	REQUIRE(new_table.att[1].data[3] == "bird");
	REQUIRE(new_table.att[2].data[3] == "1");
<<<<<<< HEAD
}
*/
int main()
{
	Parser p;
	p.initial();
}




=======
    
}
>>>>>>> 09d0afb46771323c18dd94affa7a57913ab7869a
