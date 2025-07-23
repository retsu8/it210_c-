/ ********************
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
   while(true){
      string name;
      int qtn;
      int price;
      ItemToPurchase item = ItemToPurchase();
      cout << "Enter the item name:"
      cin >> item;
      name.SetName(item);
      cout << "Enter the item price:"
      cin >> price;
      name.SetPrice(price);
      cout << "Enter the item quantity:"
      cin >> qtn;
      name.SetQuantity(qtn);
   }
   return 0;
}
