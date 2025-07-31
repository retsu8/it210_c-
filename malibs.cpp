/*
*  William Paddock
*  Mad Libs
*  2025-07-11
*  IT210 C++
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   // Setting input blank for handling string comparison
   string items = "";

   //  Setting count 0 for initial counting with int
   int count = 0;
   cin >> items >> count;

   // Need loop to keep getting new items
   // Quit here if quit is used
   while(items != "quit") {
      // Print mad libs with the included words count
      cout << "Eating "<< count << " " << items << " a day keeps you happy and healthy.";
      cin >> items >> count;
   }

   // Cleanly exit end of program
   return 0;
}