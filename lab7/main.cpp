#include <iostream>
#include <string>
using namespace std;

class ContactNode {
   public:
      ContactNode *nextNodePtr;

      // Default constructor
      ContactNode() {
         // Set the initial node data on nextNodePtr
         contactName;
         contactPhoneNumber;
         nextNodePtr = NULL;
      }

      // Parameterised Constructor
      ContactNode(string contactName, string contactPhoneNumber) {
         // Puts data into node for use.
         this -> contactName = contactName;
         this -> contactPhoneNumber = contactPhoneNumber;
         this->nextNodePtr = NULL;
      }
      string GetName(){
         return contactName;
      }
      string GetPhoneNumber(){
         return contactPhoneNumber;
      }

   private:
      // the private data elements.
      string contactName;
      string contactPhoneNumber;
};

class Linkedlist {
   ContactNode *head;
   public:
      Linkedlist() {
         head = NULL;
      }
      void InsertAfter(string contactName, string contactPhoneNumber){
         // Create a new node
         ContactNode *newNode = new ContactNode(contactName, contactPhoneNumber);
         if (head == NULL){
            head = newNode;
            return;
         }
         // Insert new node into the linked list
         newNode -> nextNodePtr = this->head;
         this -> head = newNode;
      }
      void PrintContactNode(){
         ContactNode *temp = head;
         if (head == NULL){
            cout << "List empty" << endl;
         }
         while (temp != NULL) {
            cout << "Name: " << temp -> GetName();
            cout << "Phone number: " << temp -> GetPhoneNumber();
            temp = temp -> nextNodePtr;
         }
      }
      void GetNext(ContactNode *temp) {
         return temp -> nextNodePtr;
      }
};

int main() {
   // Create new linked list;
   Linkedlist list;

   //Get data for linked list
   int count = 0;
   while(count < 3) {
      string name;
      cin >> name;
      string phone;
      cin >> phone;
      list.InsertAfter(name, phone);
      count =+ 1;
   }


   return 0;
}
