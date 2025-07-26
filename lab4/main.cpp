/********************
 *
 *  William Paddock
 *  CS210 Lab4
 *  2025-07-23
 *
 ********************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

int main() {
	int count = 1;
	vector<ItemToPurchase> cart;
	while(count < 3){
	   // Get the items in the cart, x2
	   cout << "Item " << count << endl; 
		string name;
		int qtn;
		int price;
		cout << "Enter the item name:" << endl;
		getline(cin, name);
		cout << "Enter the item price:" << endl;
		cin >> price;
		cout << "Enter the item quantity:" << endl;
		cin >> qtn;
		ItemToPurchase item;
		item.SetName(name);
		item.SetPrice(price);
		item.SetQuantity(qtn);
		cart.push_back(item);
		count++;
		cin.ignore();
		cout << endl;
	}
	cout << "TOTAL COST" << endl;
	int total = 0;
	for (int i = 0; i < (int) cart.size(); i++) {
	   // calculate the cart totals
	      ItemToPurchase item = cart[i];
	      cout << item.GetName() << " " << item.GetQuantity(); 
	      cout << " @ $" << item.GetPrice() << " = $" ;
	      cout << item.GetQuantity() * item.GetPrice() << endl;
	      total += item.GetQuantity() * item.GetPrice();
	}
	
	// print the totals
	cout << endl << "Total: $" << total << endl;
	return 0;
}
