#include "Marvel.h"


#include <iostream>
#include <string>
#include <istream>

using namespace std;

 int main()
 {
	Marvel db;

	db.Menu();
	
 
 }
 
 void Marvel :: Menu(){
	Marvel db;

	cout << "<<<<<<<<<<<<<<<<<< Marvel Main Menu>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	
	cout << "User Options :" << endl;
	cout << "1.) View Marvel Characters" << endl;
	cout << "2.) Find Marvel Characters" << endl;
	cout << "3.) Create Marvel Characters" << endl;
	cout << "4.) Delete Marvel Characters" << endl;
	cout << "5.) Update Marvel Characters" << endl;
	cout << "6.) Exit Database" << endl;
	cout << "q.) Quit Application" << endl;//FOR TESTING PURPOSES

	char request;
	cin>>request;

	while(request != 'q'){

		switch(request)
		{
			case '1':
				db.show_characters();
				break;
			case '2':
				db.find_character();
				break;
			case '3':
				db.create_character();
				break;
			case '4':
				db.delete_character();
				break;
			case '5':
				db.update_info();
				break;
			case '6':
				db.quit_app();	
				break;	
			default:
				cout << "[Error] :Invalid Request... Please try again." << endl;
				break;
		}

		cout<<endl;
		cout <<"--------------------Marvel Main Menu --------------------------" << endl;
	
		cout << "User Options :" << endl;
		cout << "1.) View Marvel Characters" << endl;
		cout << "2.) Find Marvel Characters" << endl;
		cout << "3.) Create Marvel Characters" << endl;
		cout << "4.) Delete Marvel Characters" << endl;
		cout << "5.) Update Marvel Characters" << endl;
		cout << "6.) Exit Database" << endl;
		cout << "q.) Quit Application" << endl;//FOR TESTING PURPOSES

		cin>>request;

	}

	cout<<"--------------------------GOOD BYE----------------------------------"<<endl;


}

void Marvel :: initialize_tables()
{
	//TODO:
}
void Marvel :: update_info()
{
	
	Marvel db;
	cout << "--------------------Update Info Menu --------------------------" << endl;
	
	cout << "1.) Update Marvel Human Characters" << endl;
	cout << "2.) Update Marvel Hero Characters" << endl;
	cout << "3.) Update Group Affiliation" << endl;
	cout << "4.) GO to Main Menu"<<endl;
	cout << "q.) Quit Application"<<endl;
	cout << "Please enter the number of your desired request" << endl;
	
	char request;
	cin >> request;
	
	while(request != 'q')
	{

		if(request=='1') 
		{
			
			string temp1;
			string temp2;
			string temp3;
			string temp4;
			string table = "Humans";
			cout << "Enter the Name of the Human character you would like to update" <<endl;
			cin.ignore();
			string human_name;
			getline(cin, human_name);
			
			
			cout << "Enter new value for Name: ";
			string new_name;
			getline(cin, new_name);
			temp1 = "UPDATE ";
			temp1 += table + " " + "SET name = ";
			temp1 += "\"" + new_name + "\"" + " ";
			temp1 += "WHERE(name == ";
			temp1 += "\"" + human_name + "\"" + ");";
			
			cout << temp1 << endl; // testing purposes
			
			
			cout << "Enter the new value for Height" <<endl;
			string new_height;
			getline(cin, new_height);
			temp2 = "UPDATE ";
			temp2 += table + " " + "SET height = ";
			temp2 += "\"" + new_height + "\"" + " ";
			temp2 += "WHERE(name == ";
			temp2 += "\"" + human_name + "\"" + ");";
			
			cout << temp2 << endl; // testing purposes
			
			cout << "Enter the new value for Weight" <<endl;
			string new_weight;
			getline(cin, new_weight);
			temp3 = "UPDATE ";
			temp3 += table + " " + "SET weight = ";
			temp3 += "\"" + new_weight + "\"" + " ";
			temp3 += "WHERE(name == ";
			temp3 += "\"" + human_name + "\"" + ");";
			
			cout << temp3 << endl; // testing purposes
			
			cout << "Enter the new value for Occupation" <<endl;
			string new_occ;
			getline(cin, new_occ);
			temp4 = "UPDATE ";
			temp4 += table + " " + "SET occupation = ";
			temp4 += "\"" + new_occ + "\"" + " ";
			temp4 += "WHERE(name == ";
			temp4 += "\"" + human_name + "\"" + ");";
			
			cout << temp4<< endl; // testing purposes
			
			

			// TODO :Call parser 3 times with input temp1, temp2, temp3
			
		}

		else if(request=='2') 
		{
			string temp1;
			string temp2;
			string temp3;
			string temp4;
			string table = "Heros";
			cout << "Enter the Name of the Hero character you would like to update" <<endl;
			cin.ignore();
			string hero_name;
			getline(cin, hero_name);
			
			
			cout << "Enter new value for Name: ";
			string new_name;
			getline(cin, new_name);
			temp1 = "UPDATE ";
			temp1 += table + " " + "SET name = ";
			temp1 += "\"" + new_name + "\"" + " ";
			temp1 += "WHERE(name == ";
			temp1 += "\"" + hero_name + "\"" + ");";
			
			cout << temp1 << endl; // testing purposes
			
			
			cout << "Enter the new value for Height" <<endl;
			string new_height;
			getline(cin, new_height);
			temp2 = "UPDATE ";
			temp2 += table + " " + "SET height = ";
			temp2 += "\"" + new_height + "\"" + " ";
			temp2 += "WHERE(name == ";
			temp2 += "\"" + hero_name + "\"" + ");";
			
			cout << temp2 << endl; // testing purposes
			
			cout << "Enter the new value for Weight" <<endl;
			string new_weight;
			getline(cin, new_weight);
			temp3 = "UPDATE ";
			temp3 += table + " " + "SET weight = ";
			temp3 += "\"" + new_weight + "\"" + " ";
			temp3 += "WHERE(name == ";
			temp3 += "\"" + hero_name + "\"" + ");";
			
			cout << temp3 << endl; // testing purposes
			
			cout << "Enter the new value for Abilities" <<endl;
			string new_ab;
			getline(cin, new_ab);
			temp4 = "UPDATE ";
			temp4 += table + " " + "SET abilities = ";
			temp4 += "\"" + new_ab+ "\"" + " ";
			temp4 += "WHERE(name == ";
			temp4 += "\"" + hero_name + "\"" + ");";
			
			cout << temp4<< endl; // testing purposes
			
			

			// TODO :Call parser 3 times with input temp1, temp2, temp3
		}

		else if(request=='3') 
		{
			string temp1;
			string temp2;
			
			string table = "Groups";
			cout << "Enter the Name of the Human character you would like to update" <<endl;
			cin.ignore();
			string group_name;
			getline(cin, group_name);
			
			
			cout << "Enter new value for Name of the Group: ";
			string new_name;
			getline(cin, new_name);
			temp1 = "UPDATE ";
			temp1 += table + " " + "SET name = ";
			temp1 += "\"" + new_name + "\"" + " ";
			temp1 += "WHERE(name == ";
			temp1 += "\"" + group_name + "\"" + ");";
			
			cout << temp1 << endl; // testing purposes
			
			
			cout << "Enter the new value for Group's Purpose" <<endl;
			string new_purp;
			getline(cin, new_purp);
			temp2 = "UPDATE ";
			temp2 += table + " " + "SET purpose = ";
			temp2 += "\"" + new_purp + "\"" + " ";
			temp2 += "WHERE(name == ";
			temp2 += "\"" + group_name + "\"" + ");";
			
			cout << temp2 << endl; // testing purposes
			
			// TODO :Call parser 3 times with input temp1, temp2, temp3
			
			
		}
		else if(request=='4'){
			cout << "Exiting find character Menu" << endl;
			db.Menu();
		}

		cout << "--------------------Update Info Menu --------------------------"  << endl;
	
		cout << "1.) Update Marvel Human Characters" << endl;
		cout << "2.) Update Marvel Hero Characters" << endl;
		cout << "3.) Update Group Affiliation" << endl;
		cout << "4.) GO to Main Menu"<<endl;
		cout << "q.) Quit Application"<<endl;
		cout << "Please enter the number of your desired request" << endl;

		cin>>request;

	}


	cout << "Exiting Update Menu" << endl;
	
	db.quit_app();
	
}

void Marvel :: find_character()
{
	Marvel db;

	cout << "--------------------Find Character Menu --------------------------"  << endl;

	cout << "1.) Find Marvel Human Characters" << endl;
	cout << "2.) Find Marvel Hero Characters" << endl;
	cout << "3.) Find Group Affiliation" << endl;
	cout << "4.) GO to Main Menu"<<endl;
	cout << "q.) Quit Application"<<endl;
	cout << "Please enter the number of your desired request" << endl;
	
	char request;
	cin >> request;

	while(request != 'q'){
	
		if(request=='1') 
		{
			//TODO: Find Human Characters 
			cout << "Enter the Name of the Human character you would like to find" <<endl;
			string human;
			getline(cin, human);
			
		}

		else if(request=='2') 
		{
			//TODO: Find Hero Characters 	
			cout << "Enter the Name of the Hero character you would like to find" <<endl;
			string hero;
			getline(cin, hero);
			
		}

		else if(request=='3') 
		{
			// TODOD Find Group Affiliation 
			cout << "Enter the Name of the Group Affiliation you would like to find" <<endl;
			string group;
			getline(cin, group);
			
		}
		
		else if(request=='4'){
			cout << "Exiting find character Menu" << endl;
			db.Menu();
		}

		cout << "1.) Find Marvel Human Characters" << endl;
		cout << "2.) Find Marvel Hero Characters" << endl;
		cout << "3.) Find Group Affiliation" << endl;
		cout << "4.) GO to Main Menu"<<endl;
		cout << "q.) Quit Application"<<endl;
		cout << "Please enter the number of your desired request" << endl;
	
		cin>>request;
	}
	cout << "Exiting Find Menu" << endl;

	db.quit_app();
}


void Marvel :: helper_create_character(){

	string id;
	string human_height;
	string hero_height;
	string human_weight;
	string hero_weight;
	string human_name;
	string human_occ;
	string hero_name;
	string hero_ab;
	string group_aff;
	string group_aff_purp;
	
	cout << "--------------------Character Creation Menu --------------------------" << endl;
	cout << "To create a character you must create 3 parts"<< endl;
	cout << "Your character must have a human and hero identity, and a group" << endl;

	
	cout << "Enter a number after 25, for your character's ID"<< endl;
	getline(cin, id);
	cout << "Enter your character's Human Name" << endl;
	getline(cin, human_name);
	cout << "Enter your character's Human Height" << endl;
	getline(cin, human_height);
	cout << "Enter your character's Human Weight" << endl;
	getline(cin, human_weight);
	cout << "Enter your character's Human Occupation" << endl;
	getline(cin, human_name);
	cout << "Enter your character's Hero Name" << endl;
	getline(cin, hero_name);
	cout << "Enter your character's Hero Height" << endl;
	getline(cin, hero_height);
	cout << "Enter your character's Hero Weight" << endl;
	getline(cin, hero_weight);
	cout << "Enter your character's Hero Abilities" << endl;
	getline(cin, hero_ab);
	cout << "Enter your character's Group Affiliation" << endl;
	getline(cin, group_aff);
	cout << "Enter your character's Group Affiliation Purpose" << endl;
	getline(cin, group_aff_purp);
	
	
	//-------------------------------------SQL CODE HERE -----------------------------------
	//might need to add quote around them
	//INSERT INTO Humans VALUES FROM (id, human_name, human_height,human_weight, human_occ);
	//INSERT INTO Heros VALUES FROM (id,hero_name, hero_hight, hero_weight, hero_ab);
	//INSERT INTO Groups VALUES FROM (id,group_aff,group_aff_purp);
	//-------------------------------------SQL CODE HERE -----------------------------------

}

void Marvel :: create_character()
{

	Marvel db;

	helper_create_character();
	
	cout << "Character was created"<<endl;

	cout<<"--------Created Character Options ------------";
	cout << "1.) I want to create another character" << endl;
	cout << "2.) I want to go to  Main Menu"<<endl;
	cout << "q.) Quit Application"<<endl;

	char request;
	cin >> request;

	while(request != 'q'){

		if(request=='1') {
		
			helper_create_character();
		
		}
		else if(request=='2'){
			cout << "Exiting Created Character" << endl;
			db.Menu();
		}

		cout << "Character was created"<<endl;

		cout<<"--------Creted Character Options ------------";
		cout << "1.) I want to create another character" << endl;
		cout << "2.) I want to go to  Main Menu"<<endl;
		cout << "q.) Quit Application"<<endl;

		cin>>request;
	}

	db.quit_app();
	
}

void Marvel :: delete_character()
{
	Marvel db;

	cout << "--------------------Character Deletion Menu --------------------------"  << endl;
	
	cout << " Please enter the Human name of the character that you want to delete"<< endl;
	string human_name;
	getline(cin, human_name);
	
	cout << " Please enter the Hero name of the character that you want to delete"<< endl;
	string hero_name;
	getline(cin, hero_name);
	
	cout << " Please enter the Human name of the Group that you want to delete"<< endl;
	string group_name;
	getline(cin, group_name);
	
	
	//-------------------------------------SQL CODE HERE ----------------------
	
	//-------------------------------------SQL CODE HERE ----------------------
	
	

	cout<<"--------Delete Character Options ------------";
	cout << "1.) I want to Delete another character" << endl;
	cout << "2.) I want to go to  Main Menu"<<endl;
	cout << "q.) Quit Application"<<endl;


	char request;
	cin >> request;

	while(request != 'q'){

		if(request=='1') {
		
			cout << " Please enter the Human name of the character that you want to delete"<< endl;
			getline(cin, human_name);
			
		}
		else if(request=='2'){
			cout << "Exiting Delete Character" << endl;
			db.Menu();
		}

		cout << "Character was created"<<endl;

		cout<<"--------Delete Character Options ------------";
		cout << "1.) I want to Delete another character" << endl;
		cout << "2.) I want to go to  Main Menu"<<endl;
		cout << "q.) Quit Application"<<endl;

		cin>>request;
	}

	db.quit_app();
}

void Marvel :: show_characters()
{
	
	string table_name;
	Marvel db;
	
	cout<<endl;
	cout << "--------------------Show Character Menu --------------------------"  << endl;
	cout << "1.) Show Marvel Human Characters" << endl;
	cout << "2.) Show Marvel Hero Characters" << endl;
	cout << "3.) Show Group Affiliation" << endl;
	cout << "4.) GO to Main Menu"<<endl;
	cout << "q.) Quit Application"<<endl;
	cout << "Please enter the number of your desired request" << endl;
	
	char request;
	cin >> request;

	while(request != 'q'){

		if(request=='1') {
		 
			string str = "SHOW human;";
			cout<<"PRINTING TABLE human"<<endl;
			
			
		
		}
		else if(request=='2'){
			
			string str = "SHOW hero;";
			cout<<"PRINTING TABLE hero"<<endl;
			//"Show Heros;"
			
		}
		else if(request=='3'){
			
			string str = "SHOW affiliation;";
			cout<<"PRINTING TABLE affiliation"<<endl;
			//"Show Groups;"
		}
		else if(request=='4'){
			cout << "Exiting Show Menu" << endl;
			db.Menu();
		}

		cout<<endl;
		cout << "--------------------Show Character Menu --------------------------"  << endl;
		cout << "1.) Show Marvel Human Characters" << endl;
		cout << "2.) Show Marvel Hero Characters" << endl;
		cout << "3.) Show Group Affiliation" << endl;
		cout << "4.) GO to Main Menu"<<endl;
		cout << "q.) Quit Application"<<endl;
		cout << "Please enter the number of your desired request" << endl;

		cin>>request;
	}

db.quit_app();
}
void Marvel :: quit_app()
{ 
	exit(0);
}

	
