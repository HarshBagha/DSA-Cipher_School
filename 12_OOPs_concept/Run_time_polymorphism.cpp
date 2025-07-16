#include<iostream>

using namespace std;


class Base{
  public:
  void print(){
    cout<<"From Base"<<endl;
  }
};

class Child: public Base{
  public:
  void print(){
    cout<<"From Child"<<endl;
  }
};


int main() {
  Child c1, c2; 
  c1.print();       // it will take his method rather than base class method

  // how to call the parent method even if you have the same method in child class: 
  c1.Base::print();      // using scope resolution operator. 
  
  
  return 0;
}