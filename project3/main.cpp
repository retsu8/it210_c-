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
#include "inventory.h"

using namespace std;
int GroceryHandle(){
	// Grovery store handler
	Inventory grocer;
	grocer.SetStoreName("Corner Grocer");
	grocer.FileInput("CS210_Project_Three_Input_File.txt");
	return 1;
}

int main(int argc, char *argv[]){
	// Main function for store handling
	GroceryHandle();
	return 0;
}
