#include <iostream>
#include <string>

using namespace std;

class ContactNode {
   public:
      // Default constructor
      ContactNode(string name = "", string phone = "", ContactNode* nextLoc = nullptr){
         this->contactName = name;
         this->contactPhoneNumber = phone;
         this->nextNodePtr = nextLoc;
      }
      void InsertAfter(ContactNode* nodeLoc) {
         ContactNode* tmpNext = nullptr;
         
         tmpNext = this->nextNodePtr;    // Remember next
         this->nextNodePtr = nodeLoc;    // this -- node -- ?
         nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
      }
      ContactNode* GetNext();
      void PrintContactNode(int count = 0){
   
         // Print the name of the list
         cout << "Person " << count << ": " << this -> contactName << ", "<< this -> contactPhoneNumber  << endl;
      }
      string GetName();
      string GetPhoneNumber();
   private:
       string contactName;
       string contactPhoneNumber;
       ContactNode* nextNodePtr;
};

// Grab location pointed by nextNodePtr
ContactNode* ContactNode::GetNext() {
   return this->nextNodePtr;
}

string ContactNode::GetName(){
   return this -> contactName;
}
string ContactNode::GetPhoneNumber(){
   return this -> contactPhoneNumber;
}

int main() {
   // Create new linked list;
   ContactNode* headObj  = nullptr; // Create IntNode pointers
   ContactNode* nodeObj0 = nullptr;
   ContactNode* nodeObj1 = nullptr;
   ContactNode* nodeObj2 = nullptr;
   ContactNode* temp  = nullptr;

   //Get data for linked list
   string name;
   getline(cin, name);
   string phone;
   getline(cin, phone);
   headObj = new ContactNode(name, phone);
   headObj -> PrintContactNode(1);

   cin.clear();

   getline(cin, name);
   getline(cin, phone);
   nodeObj1 = new ContactNode(name, phone);
   headObj -> InsertAfter(nodeObj1);
   nodeObj1 -> PrintContactNode(2);

   cin.clear();

   getline(cin, name);
   getline(cin, phone);
   nodeObj2 = new ContactNode(name, phone);
   nodeObj1 -> InsertAfter(nodeObj2);
   nodeObj2 -> PrintContactNode(3);

   cout << endl << "CONTACT LIST" << endl;

   temp = headObj;
   while(temp != nullptr){
      cout << "Name : " << temp -> GetName() << endl;
      cout << "Phone number : " << temp -> GetPhoneNumber() << endl;
      if (temp -> GetNext() == nullptr){
         break;
      }
      cout << endl;
      temp = temp -> GetNext();
   }
   return 0;
}
