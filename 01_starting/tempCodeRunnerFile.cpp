#include<iostream>
using namespace std;

// int -> 4 byte -> 5
// float -> 4 byte -> 5.7
// char -> 1 byte -> 'a'
// bool -> 1 byte -> true/false

int main(){          // entry point of this
  // cout<<"Now I'm printing the age: ";
  // int age ; // can initialse it with const by which you can take this value through out the code..
  // cout << age << endl;

  int num;
  // cout<<"Enter the number: "<<endl;
  // cin >> num;  // taking input in c++

  // cout <<"Number is: " << num;  

  // # INCREMENT OPERATOR 
  int a = 5, b = 5;
  if((a++ == 5) && (++b ==6) || (a==7)) {
    cout<<"1" <<endl;
  }
  else{cout << "2" <<endl;}
  cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
  


}

