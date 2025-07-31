#include <iostream>
using namespace std;

int main() {
   int currValue;
   int maximumNumber;

   cin >> currValue;

   maximumNumber = currValue;

   while (currValue > 0) {
      if (currValue > maximumNumber) {
         maximumNumber = currValue;
      }
      cin >> currValue;
   }

   cout << "Max value: " << maximumNumber;

   return 0;
}