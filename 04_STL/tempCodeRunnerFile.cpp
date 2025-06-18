#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

  map<int, string> m1;          // Map is always sorted as it always come ascending

  m1[1] = "Person1";     // here 1 is not index but 'KEY'
  m1[99] = "Person2";
  m1[99] = "Person3";

  // Access
  
  // cout<<m1[99]<<endl;        

  // cout<<m1.size()<<endl;

  // create map and add entries and print key and values 

  map<int ,char> b; 
  b[1] = 'H';
  b[8] = 'L';
  b[4] = 'O';

  // will give you the keys : 

  for(auto i: b){          // remember this it's important 
    cout<<i.first<<" "<<i.second<<endl;
  }
}