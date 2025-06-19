#include<iostream>
#include<vector> 

using namespace std;


// TEMPLATES: 

// VECTOR: 
// what is namespace ?
int main(){

  // vector<int> v1;          // created one vector of int named as v1. 
  
  // v1.push_back(10);
  // v1.push_back(12);
  // v1.push_back(14);
  // v1.push_back(16);
  // v1.push_back(18);

  // ACCESS: 

  // cout<<v1[0];          // through index   vectors also starts from '0'
  // cout<<v1.at(0);       // via at. func. 
  
  // for(int i = 0;i<v1.size();i++){
  //   cout<<v1.at(i)<<endl;
  // }

  // BY for-each: 

  // cout<<"Print through for each loop: "<<endl;
  // for(int i : v1){         // enhances for loop
  //   cout<<i<<endl;         // just give value to i in this line
  // }
  
  // want to remove the element via index 
  // use erase() function   ## v1.erase(v1.begin() + index_to_remove);

  // v1.erase(v1.begin() + 3);

  // cout<<"After deletion: "<<endl;
  // for(int i : v1){         // enhances for loop
  //   cout<<i<<endl;         // just give value to i in this line
  // }
// ========================================================================
  // Question: 
  // Take n integers as input and store them in a vector, then print in reverse.

  int n ;
  cout<<"Give n value: ";
  cin>>n;
  vector<int> v2;
  cout<<"Give values to the vector: "<<endl;

  for(int i =0;i<n;i++){
    int value;
    cin>>value;
    v2.push_back(value);
  }
  
  cout<<"Your numbers will be: "<<endl;

  for(int i=n-1;i>=0;i--){
    cout<<v2[i]<<endl;
  }
  
// ======================================================================

  
  
}