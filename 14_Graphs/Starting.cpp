#include<iostream>
#include<vector>

using namespace std;
 

int main() {

  // Vector : dynamic array 

  // vector<int> v = {1, 2, 3}; 
  // v.push_back(4);

  // // Using enhanced for loop: 
  // for(auto i: v){    // if you not aware of the collection 'v' type you can put 'auto' Keyword in front of i
  //   // here i is directly representing the value of vector, rather than indexing like arrays. 
  //   cout<<i<<" ";
  // }

  vector<pair<int,int>> vp = {{1,2}, {3, 4}};
  for(auto i: vp){
    cout<<i.first<<" , "<<i.second<<endl;
  }

  return 0;
}

  