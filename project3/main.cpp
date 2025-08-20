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
#include <bits/stdc++.h>

using namespace std;

class Inventory {
	public:
		Inventory();
		Inventory(std::string name);
		int InputFile(std::string inventory_file);
		void SetStoreName(std::string name);
		int GetInventory(string name);
		void UpdateInventory(string name);
		void PrintInventory();
	private:
		// Setting this to max inventory size
		map<string, int> product;
		std::string name;
};

Inventory::Inventory(){
	map<string, int> product = {};
	string name = "";
}

Inventory::Inventory(std::string name){
	this -> name = name;
}

void Inventory::PrintInventory(){
	for (const auto& it : this -> product)
	{
	    std::cout << it.first << " " << it.second << endl;
	}
}

void Inventory::SetStoreName(std::string name){
	this -> name = name;
}
int Inventory::GetInventory(string name){
	return this -> product[name];
}
void Inventory::UpdateInventory(string name){
	map<string, int> local = this -> product;		
	try{
		local[name] = local[name] + 1;
	} catch (ExceptionType e) {
		local.insert({name, 1});
	}

	this -> product = local;
}

int Inventory::InputFile(std::string inventory_file){
	// Open the file input stream
	ifstream inFS;
	inFS.open(inventory_file);
	if (!inFS.is_open()) {
      cout << "File is missing?" << endl;
      return 1; // 1 indicates error
   	}
   	int count = 0;
   	string line;
   	 while (getline(inFS, line)) {
        // Process each line as needed
    	cout << "checking file: " << line << endl;
    	UpdateInventory(line);
		count += 1;
    }
	cout << "Row count: " << count << endl;
	return 0;

}

int GroceryHandle(){
	// Grovery store handler
	string store_name = "Corner Grocer";
	Inventory* grocer;
	grocer = new Inventory(store_name);
	grocer -> InputFile("CS210_Project_Three_Input_File.txt");
	grocer -> PrintInventory();
	return 0;
}

int main(){
	// Main function for store handling
	GroceryHandle();
	return 0;
}
