#include<iostream>

using namespace std;

/*
Multilevel inheritance
class A{
  public: 
  int a = 5;
  
  
};

class B: public A{
  

};

class C: public B{
  
};
*/

// we're creating inheritance 
// ===========================================================================================================================
// MULTIPLE  not supported in java : multiPARENTS:  
/*

class A{
  public:
  void print(){
    cout<<"From A"<<endl;
  }
};
class B{
  public:
  void print(){
    cout<<"From B"<<endl;
  }


};
class C : public A, public B{          // it's going to give you ambiguity as two function having same name. 
  

};
  
*/

// Hierarchical Inheritance:  if A is class then it can be accessed through B and C separately.

class A{


};

class B: public A{

};

class C: public A{


};

int main() {
  B b1;
  // b1.a;

  C c1;
  // c1.a;
  // C::.print();       here i want to resolve the problem of multiple inheritance. 
  
  return 0;
}