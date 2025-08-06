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
#include <inventory.h>

Product::GetInventory(){
	return count;
}
Product::SetInventory(qty){
	this -> count = qty;
}
Product::GetName(){
	return name;
}
Product::SetName(std::string name){
	this -> name = name
}