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

int main() {
	int count = 2;
	while(count > 0){
		string name;
		int qtn;
		int price;
		ItemToPurchase item = ItemToPurchase();
		cout << "Enter the item name:";
		cin >> name;
		item.SetName(name);
		cout << "Enter the item price:";
		cin >> price;
		item.SetPrice(price);
		cout << "Enter the item quantity:";
		cin >> qtn;
		item.SetQuantity(qtn);
		count--;
	}
	return 0;
}
