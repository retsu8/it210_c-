/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: Grocery Store Handle 
 *
 *        Version:  1.0
 *        Created:  08/05/2025 11:49:20 PM
 *       Revision:  1.0.0
 *       Compiler:  gcc
 *
 *         Author:  William Paddock, 
 *   Organization:  Southern New Hampshire University CS 210 Project Three
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
class Inventory {
	private:
		// Setting this to max inventory size
		map<string, int> product;
		std::string name = "";
};

Inventory::Inventory(){
	map<string, int> product = {};
	string name = "";
}

Inventory::Inventory(std::string name){
	this -> name = name;
}

void Inventory::SetStoreName(std::string name){
	this -> name = name;
}
int Inventory::GetInventory(string name){
	return this -> product[name];
}
void Inventory::UpdateInventory(string name, int count){
	map<string, int> local = this -> product;		
	auto found = local.find(name);
	if (found != local.end()){
		found -> second += count;
	} else {
		local.insert({name, count});
	}
	this -> product = local;
}

void Inventory::InputFile(std::string inventory_file){
	// Open the file input stream
	ifstream inFS;
	inFS.open(file);
	if (!inFS.is_open()) {
      cout << "File is missing?" << endl;
      return 1; // 1 indicates error
   	}
   	int count = 0
    while (!inFS.fail()) {
    	cout << "checking file: " << fileNum << endl;
      	inFS >> fileNum;
		count += 1;
    }
	cout << "Row count: " << count << endl;

}

int GroceryHandle(){
	// Grovery store handler
	string store_name = "Corner Grocer";
	Inventory* grocer;
	grocer = new Inventory(store_name);
	grocer -> InputFile("CS210_Project_Three_Input_File.txt");
	return 0;
}

int main(){
	// Main function for store handling
	GroceryHandle();
	return 0;
}
