#include<iostream>
using namespace std;

int factorial(int n ){
  // Base case
  if(n==0) return 1;

  return n * factorial(n-1);

}

// function in which function return 1 to n print krvaoo

void printingnumber(int n ){
  // Base case
  if(n==0) return; 
  // this is called TAIL RECURSION 
  // cout<<n<<" ";           // if run this then output will be 1,2,3,4... before executing in stack it was printing before stack 
  printingnumber(n-1);
  // this is called HEAD RECURSION
  cout<<n<<" ";         // if this : output will be 5,4,3,2,1....
}

int main(){
  int n;
  cout<<"Give the input: "<<endl;
  cin>>n;
  
  // int ans = factorial(n);
  // cout<<ans;

  
  printingnumber(n);
}
