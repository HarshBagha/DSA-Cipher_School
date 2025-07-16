#include<iostream>

using namespace std;
/*
Compile time polymprphism
*/

int add(int a, int b){
  return a*b;
}

int add(int a ,int b , int c){
  return a + b + c;
}

int main() {
  cout<<add(2,3);  // this is called compile time polymorphism choosing the method on the compile time
  
  return 0;
}