#include<iostream>
#include<climits>

using namespace std;

// selection sort -> this algo works by repeatedly finding the minimum element
// bubble sort -> this algo works by repeatedly finding the maximum element

void selectionsort(int arr[], int size){
  for(int i =0;i<size-1;i++){       // cuz last element is already going to get sorted and i should run till 
    // second last element if want to compare the jth element which is one more than i
    int min = i;       // we placed min here to reset when we find one min element
    for(int j = i+1 ;j<size;j++){
      if(arr[j] < arr[min]) min = j;
    }
    swap(arr[min], arr[i]);
  }
} 

void bubblesort(int arr[], int n){
  
  for(int i =0;i<n;i++){
    bool swapped = false;
    for(int j = 0 ;j<n-i-1 ;j++){       // we need one element less 
      if(arr[j] >arr[j+1]){
      swap(arr[j], arr[j+1]);
      swapped = true;
    }
  }
  if(swapped == false ) break;
  // Key Takeaway: Think of the swapped flag as answering the question, "Did I do any work in this pass?"
  // If the answer is no (swapped is false), the job is done.
  }
}




void insertionSort(int arr[], int n){
  for(int i =1; i<n ;i++){
    int j = i-1;         // left side of i to compare the element with ith value
    int key = arr[i];    // initialise ith element as key element

    while(j>=0 && arr[j]> key){    // checking jth value is greater than i th 
      arr[j+1] = arr[j];       // here it shifts the element to next index 
      j--;                     // it's checking each previous element with the updated one
    }
    arr[j+1] = key;
  }

}



int main(){

  int arr[5] = {3,2,1,0,2};
  
  // selectionsort(arr,5);
  // bubblesort(arr, 5);
  insertionSort(arr, 5);
  for(int i =0;i<5;i++){
    cout<<arr[i] << " ";
  }

  

}