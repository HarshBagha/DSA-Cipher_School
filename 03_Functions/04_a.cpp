#include<iostream>
using namespace std;

// void func2(){
//   cout<<"2";
// }

// void func1(){
//   func2();
//   cout<<"1";
// }

// void func2(){
//   cout<<"2";
// }            // if you declare func2() after func1() then code gives error as in func1() we have declare func2()==> it's topo downn approach

// To resolve this (can we bypass it) : BY using FORWARD DECLARATION !! 


// NON-VOID FUNCTION : 

// int add(int a, int b){
//   // cout<<"Hello";
//   // return 100 ;       // it's not like printing
//   // cout<<"Hello2";   // Hello2 won't going to be in the output as after returing something function gets out of it's scope

//   int ans = a + b;

//   return ans;

// }

// create function that asked for a student name and give me the output? 

// string getname(string h){
//   return h;
// }

// Note: NON-VOID will return something unlike VOID FUNCTION !!

// VOID FUNCTIONS: 


void func1(){            // function declaration
  cout<<"Hello Harsh "<<endl;  // func definition
}

// FUNCTION WITH PARAMETERS:
void func2(int a, int b){
  cout << a <<" "<< b<<endl;
}

// NON-VOID FUNCTIONS: 

int add(int num1 , float num2){

  return num1 + num2;

}

float f(){

  return 3.14;

}

int main()
{
  // func1();
  // cout<<"Your answer: "<< add(4, 5)<<endl;
  // cout<<"Your name : "<< getname("Harsh");
  func1();
  func2(2, 9);
  cout<< add(5, 6.5);    // you have to pass the value according to the data type
  cout<<endl;
  cout<<f();
}


// Note: explicit and implicit conversion ? 

