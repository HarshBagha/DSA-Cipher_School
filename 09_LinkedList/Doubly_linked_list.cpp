#include<iostream>
using namespace std;

// FOR SINGLY LINKED LIST:

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(int val){
    data = val;
    prev = NULL;
    next = NULL;              // pointing to null cuz in singly we are doing this if next node is not present initially
  }
};

// INSERTING

void insertAtEnd(Node* &head, int val){
  Node* n = new Node(val);
  // EDGE CASE:

  if(head == NULL){
    head = n;
    return;
  }

  Node* temp = head;
  while(temp -> next != NULL){
    temp = temp->next;
  }
  temp->next = n;
  n->prev = temp;

}

void deleteFromEnd(Node* &head){
  if(head == NULL) return ;

  Node* temp = head;
  while(temp->next != NULL){
    temp = temp -> next;

  }
  temp->prev -> next = NULL;
  delete temp; 
}

// creating a doubly Linked List


int main(){

  

}