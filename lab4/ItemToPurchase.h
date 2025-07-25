/********************
*
*  William Paddock
*  CS210 Lab4
*  2025-07-23
*
********************/

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
	public:
		void SetName(std::string name);
		string getName();
		void SetPrice(int price);
		int GetPrice();
		void SetQuantity(int quantity);
		int GetQuantity();
	private:
		string itemName;
		double itemPrice;
		int itemQuantity;
};

#endif
