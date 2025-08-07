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
#include <inventory.h>

int GrocerHandle(char file){
	// Grovery store handler
	Inventory inventory = Inventory();
	inventory.FileInput(file);
	return 1;
}

int main(int argc, char *argv[]){
	// Main function for store handling
	GroceryHandle(argv[1]);
	return 0;
}
