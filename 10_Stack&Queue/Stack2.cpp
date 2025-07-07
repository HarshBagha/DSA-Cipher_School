#include<iostream>
using namespace std;

class mystack{
  int arr[1000]; 
  int top;

  mystack(){
    top = -1; 
  }

  // This is how push will function in stack
  void push(int x){
    if(top == 999){
      cout<<"Stack Overflow"<<endl;
      return;
    }
    // top++;
    arr[++top] = x;
  }

  // POP operation in stack 
  void pop(){
    if(top==-1){
      cout<<"Stack Underflow"<<endl;
      return;
    }
    top--; 
  }
  
  bool empty(){
    if(top==-1){
      cout<<"Stack is empty"<<endl;
      return;
    }
  }
  int top(){
    if(top==-1) return -1;
    return arr[top];
  }

  

};

int main(){


}