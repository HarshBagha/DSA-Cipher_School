#include<iostream>
using namespace std;

int factorial(int n ){
  // Base case
  if(n==0) return 1;

  return n * factorial(n-1);

}
// ==================================================================================

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
// ==================================================================================

// FIBONNACI series: 
int fib(int n){
  // base case
  if(n==0) return 0;
  if(n==1) return 1;

  return fib(n-1) + fib(n-2);

}
/* Given a staircase of N steps and you can either climb 1 or 2 stes at a  given time. The task
is to return the count of distinct ways to climb to the top
Note: The order of the steps taken matters

e.g. INPUT: N = 3
     OUTPUT: 3
     explaination: There are three distinct ways of climbing a staircase of 2 steps:
     [1,1,1], [2,1] and [1,2]. */

// ==================================================================================
    
// Finding is ARRAY SORTED : using RECURSION: 

bool isSorted(int arr[], int size){
  // base case
  if(size==0 || size == 1) return true;

  if(arr[0]>arr[1]) return false;
  
  else{
    return 
    isSorted(arr+1, size-1);
  }
}
// ==================================================================================

// Getting the sum of array: 

int getSum(int arr[], int size){
  if(size==0) return 0;
  if(size==1) return arr[0];

  int remainingPart = getSum(arr+1, size-1);
  int sum = arr[0] + remainingPart;
  return sum;
}
// ==================================================================================
// FINDING WHETHER KEY IS PRESENT IN THIS OR NOT

bool isPresent(int arr[], int size, int key){
  // BASE CASE 
  if(size == 0) return false;
  if(arr[0] == key) return true;

  else{
    return isPresent(arr+1, size-1, key);
  }
}
// ==================================================================================
 
// DO BINARY SEARCH USING RECURSION: 

bool binarySearch(int arr[], int s, int e, int key){
  if(s>e) return false;
  int mid = (s+e)/2;
  if(arr[mid] == key) return true;
  if(arr[mid] < key){
    return binarySearch(arr, mid +1, e, key);
  }
  else{
    return binarySearch(arr, s, mid - 1, key);
  }
}

int main(){
  int n;
  // cout<<"Give the input: "<<endl;
  // cin>>n;
  
  // int ans = factorial(n);
  // cout<<ans;
  int arr[] = {3,5,7,9,10,12};
  
  // printingnumber(n);
  // cout<<"Your summation of previous 2: "<<fib(n);
  // cout<<"Sum will be: "<<getSum(arr,6); 
  // if(isPresent) cout<<"Key is present";
  // else cout<<"Key is not present";


  // cout<<isPresent(arr,6, 12);         // return 1
  cout<<binarySearch(arr, 0, 5, 5);    // pass the index value of start and end not exact array values keep that in mind 

  
}
