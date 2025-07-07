#include<iostream>
using namespace std;

class MyQueue{
  public:
  int arr[1000];
  int front, rear;

  MyQueue(){
    front = 0;     // initialise with zero so that we don't have to increment it
    rear = -1; 
  }

  void enqueue(int x){            
    if(rear == 999){
      cout<<"Queue Overflow"<<endl;
      return;
    }

    // rear++;
    arr[++rear] = x;
  }

  void dequeue(){      
    if(front>rear){
      cout<<"Queue Underflow\n";
      return;
    }
    front++;
  }

  bool empty(){
    if(front==NULL) return true;
    else return false;
  }


};