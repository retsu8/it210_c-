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

// Build the ItemToPurchase object
void ItemToPurchase::SetName(string name){
	itemName = name;
}
string ItemToPurchase::GetName(){
	return this -> itemName;
}
void ItemToPurchase::SetPrice(int price){
	this -> itemPrice = price;
}
int ItemToPurchase::GetPrice(){
	return this -> itemPrice;
}
void ItemToPurchase::SetQuantity(int quantity){
	this -> itemQuantity = quantity;
}
int ItemToPurchase::GetQuantity(){
	return this -> itemQuantity;
}