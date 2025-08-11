#include <iostream>
#include <string>
using namespace std;

class ContactNode {
public:
   string GetName(){
      return contactName;
   }
   string GetPhoneNumber(){
      return contactPhoneNumber;
   }
   void InsertAfter(){

   }
   ContactNode GetNext(){

   }
   void PrintContactNode(){
      cout << "Name: " << this -> GetName();
      cout << "Phone number: " << this -> GetPhoneNumber();
   }
   
private:
   string contactName;
   string contactPhoneNumber;
   ContactNode* nextNodePtr;
   
};

/* Define member functions here */

int main() {
   /* Type your code here. */
   
   return 0;
}
