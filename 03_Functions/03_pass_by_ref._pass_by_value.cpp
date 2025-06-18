#include<iostream>
using namespace std;

// void myfunc1(int x){
//   x++;
//   cout<<"value of a according to func1 : "<<x<<endl;
// }

void myfunc1(int &x){              // PASS BY REFERENCE 
  x++;
  cout<<"value of a according to func1 : "<<x<<endl;
}

// create a function whcih multip the 2 numbers :

void multiply(int &a, int &b, int &c){
   c = a*b;
   cout<<"Your answer is : "<<a<<" * "<<b<<" "<<c<<endl;

}

int main(){

// PASS BY VALUE?  copy of actual var. is passed.

  // int a =5;
  // myfunc1(a); // in this function we PASSED BY VALUE 

  // cout<<"new value of a : "<<a<<endl;
  
  // FOR PASS BY REFERENCE? func will receive the actual address of the var. hence it affect the var. values. 

  // myfunc1(a);        // here not creating a copy but actually puting by value in the func...
  // cout<<"PASS BY REFER.. of a : "<<a<<endl;
  
  // # create a function whcih multip the 2 numbers :

  int a = 5;
  int b = 6;
  int c = 7;
  cout<<c<<endl;
  multiply(a,b,c);
  cout<<"Your answer for the multiplication: "<< c <<endl;
  
   cout<<&a<<endl;   // give you the address of c var.

}