#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
      data = val;
      next = NULL;
    }
};

void insertAtEnd(Node*&head, int val){

  Node *n = new Node(val);

  if(head==NULL){
    head = n;    // We just place head in the new node 
    return;
  }
  Node* temp = head;
  while(temp-> next != NULL){
    temp = temp -> next;
  }
  temp-> next = n; 

}


void insertAtBeginning(Node*&head, int val){
  Node* n =new Node(val);
  n-> next = head;
  head = n;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node*&head, int pos, int val){

  if(pos ==0){
    insertAtBeginning(head, val);
    return;
  }

  Node *n = new Node(val);
  Node *temp = head;

  for(int i =0; i<pos-1 ; i++){
    temp = temp -> next;
  }
  n-> next = temp -> next;
  temp-> next = n;

}

void deleteFromBeginning(Node*&head){
  if(head == NULL) return ;
  if(head-> next == NULL){
    delete head;
    head == NULL;
    return;
  }
}

// Delete from position
void deleteFromPosition(Node*&head, int pos){
  if(head==NULL) return ;

  if(pos == 0){
    deleteFromBeginning(head);
  }
  Node* temp = head;
  for(int i =0; i<pos-1; i++){
    temp = temp->next;
  }
  Node *toDel = temp->next;
  temp-> next = temp->next->next;
  delete toDel;
}

bool search(Node* head, int key){
  Node* temp = head;
  while(temp!=NULL){
    if(temp->data == key){
      return true;
    }
    temp = temp->next;
  }
  return false;
}


int main(){
     Node* head = NULL; // Start with an empty list

    // Insert some values at the end
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    insertAtBeginning(head, 100);

    // Print the linked list
    cout << "The linked list is: ";
    printList(head);
    
    cout<<search(head, 40);
    return 0;
  

}