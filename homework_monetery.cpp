
#include <iostream>
using namespace std;

// FIXME: Add parameters for dimes, nickels, and pennies. 
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies ) {

   cout << "FIXME: Finish writing ComputeChange" << endl;

   numQuarters = totCents / 25;
}

int main() {
   int userCents;
   int numQuarters;
   int numDimes;
   int numNickles;
   int numPennies;

   cout << "Enter total cents: " << endl;
   cin >> userCents;

   cout << "" << endl;

   ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickels: " << numNickels << endl;
   cout << "Pennies: " << numPennies << endl;

   return 0;
}
