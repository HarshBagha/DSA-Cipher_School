#include<iostream>
using namespace std;


// POINTERS : special type of var. stores the addresses of a datatype, make sure to take the datatype of the pointer as the var.
// Symbol(*)



int main(){
  
  // int a = 5;

  // int *ptr = &a;   // created a pointer having address of a.

  // cout<< &a<< endl;
  // cout<<ptr<<endl;    // will print the same output of the address of the 'a' var.

  // cout<< *ptr<<endl;  // deferencing. 

  // int &ref = a;
  // cout<<ref<<endl;;
  // cout<< &a <<endl;


  // Question : 
  // CREATE A VAR. print refrene then pointer se reference print then value through pointer. 

  int b = 8; 
  int *ptr1 = &b;
  int **ptr3 = &ptr1;

  cout<< &b <<endl;  // gives address of 'b' var. 

  cout<< &ptr1 <<endl;  // address of ptr1.
  
  cout<<ptr3<<endl; // address of of the ptr1 through pointer

  cout<< ptr1<<endl; // gives the address of 'b' var. through pointer

  cout<< *ptr1<<endl; // deferencing. 

  cout<< **ptr3<<endl;



}