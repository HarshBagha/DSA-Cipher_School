#include<iostream>
#include<climits>
#include<algorithm> // for is_sorted func

using namespace std;

// Find the maximum element. 
int findMax(int arr[], int size){
  int max = arr[0]; 
  for(int i = 0;i<size;i++){             // always remember whenever you will give the size 
    if(arr[i]>max){
      max = arr[i]; 
    } 
    // else if(arr[i]>arr[i+1]){
    //   max = arr[i];
    // }
  }
 return max;
}
// for minimum: 

int findMin(int arr[], int size){
  int min = arr[0]; 
  for(int i = 0;i<size;i++){             // always remember whenever you will give the size 
    if(arr[i]<min){
      min = arr[i]; 
    } 
    // else if(arr[i]>arr[i+1]){
    //   max = arr[i];
    // }
  }
 return min;
}


//  count even and odd? 

void countEvenOdd(int arr[], int size){
  int counteven = 0; 
  int countodd = 0; 
  for(int i =0;i<size;i++){
  if(arr[i]%2==0){
    counteven++;
  }
  else{
    countodd++;
  }
}
cout<<"Even count will be: "<<counteven<<" Odd count will be: "<<countodd;

}

// REVERSE an array: 

void Reversearray(int arr[], int size){
  for(int i = size-1; i>=0;i--){
    cout<<arr[i]<<" ";
  } 
}

// If an array is a palindrome or not? 

// Find the second largest element: 

void secondlargest(int arr[], int size){
    int firstmax = INT_MIN;
  for(int i = 0;i<size; i++){
    if(arr[i]>firstmax){
      firstmax = arr[i];
    }
  }

  int secondmax = INT_MIN; 
  for(int i = 0;i<size;i++){
    if(arr[i]>secondmax && arr[i]!= firstmax){
      secondmax = arr[i];
    }
  }
  cout<<secondmax;
  
}

// by faculty for second max:

void secondlargest1(int arr[], int size){
    int firstmax = INT_MIN; int secondmax = INT_MIN; 
  for(int i = 0;i<size; i++){
    if(arr[i]>firstmax){
      secondmax = firstmax; 
      firstmax = arr[i];
    }
    else if(arr[i]>secondmax && arr[i]!= firstmax){
      secondmax = arr[i];
    }
  }
  cout<<secondmax;
}

//  Find the first repeating element: 

int repeatingElement(int arr[], int size){
    
  for(int i =0;i<size;i++){
    for(int j =i+1;j<size;j++){
      if(arr[i]==arr[j]){ 
        return arr[i];
    }
  } 
}
return -1;
}

// check if array is sorted or not: 

bool isSorted(int arr[], int size){
  
  // we can use is_sorted array func:

  
  // if(is_sorted(arr, arr+size)){

  //   return true;
  // }
  // else{
  //   return false;
  // }

  for(int i =0;i<size-1;i++){
    if(arr[i]>arr[i+1]){               // arr[i] < arr[i-1]  return is true in this case
      return false;
    }
  }
  return true;
}

int main(){

  int arr[] = {1,2,3,4,5};
  // cout<<findMax(arr, 5)<<endl;
  // cout<<findMin(arr, 5);


  // countEvenOdd(arr, 5);      
  // Reversearray(arr, 5);  
  // secondlargest(arr, 5);
  // cout<<repeatingElement(arr, 5);
  cout<<isSorted(arr, 5);
  
}
