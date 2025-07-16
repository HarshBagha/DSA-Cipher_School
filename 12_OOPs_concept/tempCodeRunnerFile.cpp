#include<iostream>

using namespace std;

// A virtual function is a member function in base class that we expect to redefine in derieved class. 

class Base{
  public: 
  // with this definition we only access the parent method 
  // void print(){
  //   cout<<"From base"<<endl;

  // }

  // To access the child method through parents pointer we can use the VIRTUAL FUNCTION
  virtual void print(){
    cout<<"From Base"<<endl;
  }
};

class Derived: public Base{
  public: 
  void print() override { 
  // For safety check we use override to override one method which we are saying to the system that which we should
  // have to override because we are telling the system we defined one virtual method in base class so that's why override 
  // keyword is used as SAFETY CHECK (although the code is going to work even if override is not present but just for safety check
  // we use)
  
    cout<<"From Derived"<<endl;
  }
};

int main() {
  Derived d1;
  Base *b = &d1;
  b-> print();
  
  return 0;
}