/*
 * =====================================================================================
 *
 *       Filename:  inventory.h
 *    Description: Inventory H file
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
#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include "product.h"
using namespace std;

class Inventory{
	public:
		Inventory();
		void SetStoreName(std::string name);
		int GetInventory();
		void SetInventory(int qty);
		string GetName();
		void SetName(std::string name);
		int FileInput(std::string inventory_file);
	private:
		// Setting this to max inventory size
		Product product[255];
		string name = "";

};


#endif