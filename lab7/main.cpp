#include <iostream>
#include <string>
using namespace std;

class Node {
   public:
      Node *nextNodePtr;
      Node *prevNodePtr;

      // Default constructor
      Node() {
         // Set the initial node data on nextNodePtr
         nextNodePtr = NULL;
         prevNodePtr = NULL;
      }

      // Parameterised Constructor
      Node(string contactName, string contactPhoneNumber) {
         // Puts data into node for use.
         this -> contactName = contactName;
         this -> contactPhoneNumber = contactPhoneNumber;
         this -> prevNodePtr = this->nextNodePtr = NULL;
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

class ContactNode {
   Node *head;
   public:
      ContactNode(){
         this -> head = NULL;
      }
      ContactNode(string contactName, string contactPhoneNumber){
         Node *newNode = new Node(contactName, contactPhoneNumber);
         this -> head = newNode;
      }
      string GetName(){
         return head -> GetName();
      }
      string GetPhoneNumber(){
         return head -> GetPhoneNumber();
      }
      void InsertAfter(string contactName, string contactPhoneNumber){
         // Create a new noded
         Node *newNode = new Node(contactName, contactPhoneNumber);
         if (head == NULL){
            head = newNode;
            return;
         }
         // Insert new node into the linked list
         newNode -> nextNodePtr = this->head;
         this -> head = newNode;
      }
      void PrintContactNode(){
         Node *temp = head;
         
         // Print the name of the list
         if (head == NULL){
            cout << "List empty" << endl;
         }
         // Keep track of the contacts
         int count = 1;
         while (temp != NULL) {
            cout << "Person " << count << ": " << temp -> GetName() << ", "<< temp -> GetPhoneNumber()  << endl;
            temp = temp -> prevNodePtr;
            count = count + 1;
         }

         // Tail response
         cout << endl;
      }
      ContactNode* GetNext() {
         head = head -> nextNodePtr;
      }
};

int main() {
   // Create new linked list;
   ContactNode list;

   //Get data for linked list
   int count = 0;
   while(count < 3) {
      string name;
      getline(cin, name);
      string phone;
      getline(cin, phone);
      list.InsertAfter(name, phone);
      count = count + 1;
   }

   list.PrintContactNode();

   return 0;
}
