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

int Inventory::GetInventory(){
	return count;
}
void Inventory::SetInventory(qty){
	this -> count = qty;
}
string Inventory::GetName(){
	return name;
}
void Inventory::SetName(std::string name){
	this -> name = name
}

int Inventory::FileInput(string file){
	// Open the file input stream
	ifstream inFS;
	inFS.open(file);
	if (!inFS.is_open()) {
      cout << "File is missing?" << endl;
      return 1; // 1 indicates error
   }
    while (!inFS.fail()) {
    	cout << "checking file: " << fileNum << endl;
      	inFS >> fileNum;
   }
   return 0
}