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

// Reference ItemToPurchase headers
class ItemToPurchase {
   private:
		string itemName = "NoName";
		int itemPrice = 0;
		int itemQuantity = 0;
	public:
		void SetName(string name);
		string GetName();
		void SetPrice(int price);
		int GetPrice();
		void SetQuantity(int quantity);
		int GetQuantity();
};

#endif
