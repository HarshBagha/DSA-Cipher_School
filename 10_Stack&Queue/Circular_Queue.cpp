#include<iostream>

using namespace std;

class CircularQueue{
public:
  // better to initialise n size in heap
  // int arr[n]; // so this is wrong practice. 

  // using heap giving the size of n :
  int* arr;
  int size;
  int front, rear;

  CircularQueue(int n){
    size = n;
    arr = new int[size];     // in head memory. 
    front = rear = -1; 
  }
  bool enqueue(int value){
    if ((rear+1) % size == front){
      cout<<"Queue is full\n";
      return false;
    }

    if(front == -1) front = 0;
    rear = (rear + 1)%size;
    arr[rear] =  value;
    return true;
  }
  
  int dequeue(){
    if (front == -1){
      cout<<"Queue is empty\n";
      return -1;
    }
    int ans = arr[front];

    if(front == rear){
      front = rear -1;
    }
    else{
      front = (front + 1) % size;
    }
    return ans;
  }

  // and rest all the same like empty and all 

};

int main() {
  
  return 0;
}