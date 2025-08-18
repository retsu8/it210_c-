/*
 * =====================================================================================
 *
 *       Filename:  inventory.cpp
 *    Description: Inventory Main
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
#include <fstream>
#include <iostream>
#include "inventory.h"

using namespace std;

void Inventory::SetStoreName(string name){
	this -> name = name;
}
int Inventory::GetInventory(Product product){
	return product -> quantity;
}
void Inventory::SetInventory(Product product){
	this -> count = qty;
}
string Inventory::GetName(){
	return name;
}
void Inventory::SetName(std::string name){
	this -> name = name
}

int Inventory::FileInput(std::string inventory_file){
	// Open the file input stream
	/*ifstream inFS;
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
   */
   return 0;
}