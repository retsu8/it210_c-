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
#include "includes/Inventory.h"

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
