#include<iostream>
using namespace std;

void sumofarray(int arr[],int size){        // this is how you can parameterised array in 
  int sum =0;
  for(int i=0;i<size;i++){
    sum += arr[i];
  }
  cout<<sum<<endl;
}


int main(){

  int arr[5] = {10, 20, 30, 40, 50};
  sumofarray(arr, 5);       // getting sum for array via function

}