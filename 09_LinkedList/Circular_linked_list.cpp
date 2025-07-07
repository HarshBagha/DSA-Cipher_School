#include<iostream>
using namespace std;
class Node{

  public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

void insertAtEnd(Node* &head, int val){

  Node* n= new Node(val);

  // BASE CASE:
  if(head == NULL){
    n->next = n;
    head = n;
    return;
  }

  Node* temp = head;
  while(temp->next != head){
    temp = temp->next;
  }
  n->next = head;
  temp->next = n;

}

// INSERT AT THE BEGINNIG 

void insertAtBeginning(Node* &head, int val){
  Node* n = new Node(val);

  // BASE CASE:

  if(head == NULL){
    n->next = n;
    head = n;
    return;
  }

  Node* temp = head;

  while(temp->next != head){
    temp = temp ->next;
  }
  // below is the main logic for inserting the new node between Circular Linked List
  temp->next = n;
  n->next = head;
  head = n;
}


// INSERT AT THE POSTION

void insertAtPosition(Node*&head, int pos, int val){

  Node* n= new Node(val);
  Node* temp = head;

  for(int i = 0; i<pos-1; i++){

    temp = temp->next;

  }
  n->next = temp->next;
  temp->next = n;

}

// Printing Circular LinkedList:

void printList(Node* head){
  if (head == NULL){
    cout<<"list is empty";
    return;
  }
  Node* temp = head;
    do{
      cout<<temp->data<<" -> ";
      temp = temp->next;
    }while(temp!=head);

  cout<<"Back to head\n";

}


// Deletion in circular LinkedList



int main(){
  Node* head = NULL;
  insertAtBeginning(head,10);
  insertAtBeginning(head,11);
  insertAtBeginning(head,13);
  insertAtBeginning(head,15);

  // Printing the circular LinkedList:
    
  printList(head);

}
