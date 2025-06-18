#include<iostream>
using namespace std;

// Function: set of statments execute when func is called. 
// FUNCTION OVER LOADING??
//  => funcition having same name but different paramter
void add(){
  cout<<"1";
}

void add(int num1){
 cout<<"2";
}

void add(float num2){
  cout<<"3";
}


int add(int num1, int num2){
  return num1;
}

// int add(int num1){
//   return num1;
// }
// as u define the same name and but different data type still gives error the only possible way to 
// distiniguish between them is different parameters

// ===========================================================================


// Question: create method name coffee : ask your how many numbers sugars you want ? 
//  what's the size of the cup you want

// output: number of suger (int)
// output: small, medium and large? (string)

void coffee(int sugar, string cup){
  
  cout<<"Number of sugars: "<<sugar<<endl<<"Size of the cup: "<<cup<<endl;
  
}

// ====================================================================================

int test = 20;
int test(){
  return 10;

}
// ===================================================================================

// void test1(string name){
//   cout<<"Hello "<<name;

// }

// Default paramters !!
// ====================

// void test1(string name = "John"){

//   cout<<"Hello "<<name;

// }

int main(){
  // add();    
//  add(1.1); because in c++ we use f with number for floats
  // add(1.1f);
  // cout<<endl;
  // cout<<"Your int type number is: "<<add(1,1);

  // coffee(3, "Medium");


  cout<< test <<endl;   // figure it out why this is giving you an error?? ans: Name collision is happening over here
                      // because in c++ compiler cannot distinguish between the variable and the function when you use test

  
  
  
// test1();      // even if you weren't given the paramters in the paramterized function 
                // but you've given th default name: in the func itself -> it will take the parameter automatically 

// test1("David"); //  David will over ride the John 


}
