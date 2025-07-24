/********************
*
*  William Paddock
*  CS210 Lab4
*  2025-07-23
*
********************/

#include <iostream>
#include <string>
using namespace std;

#include "ItemToPurchase.h"

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
};
