#include<iostream>

using namespace std;

// scalability, security etc.. 
// Creating a class: 
class Rectangle{
  // Data Member function
  // Member function

  private: 
  int length;
  int breadth;

  public: 

  Rectangle(int l, int b){
    length = l;
    breadth = b;
  }
  // This is called GETTER METHODs: 

  int getLength(){     // using this encapsulation technique we only get the value rather than changing the value from calling from MAIN FUNC.
    return length;
  }
  // This is SETTER METHODS: 
  
  void setLength(int val){
    length = val;
  }

};


/*
4 pillars of OOPS: 
==================
single responsibility princple <= have a look over here??

Encapsulation: enclosing respon. in a container and that function is specified to a person or group <= by ME

Definition by FACULTY: 
======================

1. It is a process of wrapping similar code in one place. 
2. we cannot access any func from the class directly.
3. Increase in security of data
4. it helps control the modification of out data members. 
above in lemman: can't alter the data from outside (UNAUTHORISED ACCESS).

e.g. setting up the class which only perform for a specific task
================================================================================================================================

INHERITANCE: 
BY ME:  

Definition of INHERITANCE BY FACULTY: 
inheritance-> in this a class (called the child or derived) acquires properties and behaviour from another class 
(called parent or base class)

=================================================================================================================================

POLYMORPHISM: 
DEFINITION: 
===========
The term polymorphism is combination of 'poly' + 'morphism' which means many forms
e.g. SINGLE person is behaving differently according to the different situation 

POLYMORPHISM -> compile time -> func overloading and operator overloading

[Compliee time -> the overloaded functions are invoked by matching the type and number of arguments. This information is available
at compile time and therefore compiler selects the appropriate function at compile time. It is also known as STATIC BINDING or 
EARLY BINDING.]


Runtime -> Virtual functions
============================


This type of poly.. is achieved by func overriding, 
it is also called the LATE BINDING and DYNAMIC POLYMORPHISM
The function call is resolved at runtime. 

==================================================================================================================================

ABSTRACTION: 
============
when you don't know what is going on in the function you're calling like using the math library 
e.g. maths library: 
you are just importing function here and just doing your task rather then knowing about inbuilt structure of the functions. 



*/


// this below code for encapsulation: 

// int main() {

//   Rectangle r1(5,10);     // creating a class
  
//   cout <<"Before : "<< r1.getLength()<<endl;

//   r1.setLength(10);

// // for changing the things we created a method which changes your infor. LIKE -> SETTER METHODS..

//   cout<<"After : "<<r1.getLength()<<endl;

//   return 0;
// }
//=========================================================================================================================

// For inhertiance

class Animal{
  public:
  void eat(){
    cout<<"Eating"<<endl;

  }
  


};
class Dog: public Animal{            // INHERITING animal class 
  public: 
  void bark(){

    cout<<"Barking"<<endl;
    
  }
};

class lion : public Animal{
  public: 
  void roar(){

    cout<<"Roaring"<<endl;

  }
};

int main(){
  Dog dog1;
  dog1.eat();

  Animal a1;
  a1.eat();   // parent can run his func but can't have a access of child class function 

  lion l;
  l.roar();

  // a1.roar(); // here again animal can't access the function called roar from his CHILD CLASS. 


}


