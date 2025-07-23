/ ********************
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
		void SetName(sting name){
			this -> itemName = name
		}
		string getName(){
			return this -> itemName;
		}
		void SetPrice(int price){
			this -> itemPrice = price;
		}
		int GetPrice(){
			return this -> itemPrice;
		}
		void SetQuantity(int quantity){
			this -> itemQuantity = quantity;
		}
		int GetQuantity(){
			return this -> itemQuantity;
		}
	private:
		string itemName;
		double itemPrice;
		int itemQuantity
}

#endif
