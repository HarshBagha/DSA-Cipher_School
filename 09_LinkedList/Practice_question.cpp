#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at end
void insertAtEnd(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

// Delete from beginning
void deleteAtBeginning(Node*& head) {
    if (head == NULL) {
        cout << "List is already empty!" << endl;
        return;
    }
    Node* temp = head;
    head = head->next; // Move head to next node
    delete temp;       // Free memory of old head
}


// Print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Insert elements
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Original list: ";
    printList(head);

    // Delete the beginning node
    deleteAtBeginning(head);

    cout << "After deleting the beginning node: ";
    printList(head);

    return 0;
}


