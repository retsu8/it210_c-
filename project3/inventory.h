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

class Product{
	public:
		int GetInventory();
		void SetInventory(int qty);
		int GetName();
		void SetName(std::string name);
	private:
		name="",
		count=0
}