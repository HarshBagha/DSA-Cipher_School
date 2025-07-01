#include<iostream>
using namespace std;



// Copy paste from Sir github. 
// THESE ARE THE STEPS : 
/*
1. partition
2. shi jga bhejna
3. left and right ko sort krna
*/


// GOING TO RETURN THE PIVOT INDEX
int partition(int arr[], int s, int e){

  int pivot = arr[s];
  int count = 0;
  for(int i = s +1; i<=e; i++){
    if(arr[i] <= pivot) count++;
  }

  int pivotIndex = s+ count;
  swap(arr[pivotIndex],arr[s]);

  int i = s;
  int j = e;
  while(i< pivotIndex && j>pivotIndex){
    while(arr[i] < pivot) i++;
    while(arr[j] > pivot) j--;

    swap(arr[i++], arr[j--]);
  }
  return pivotIndex;
}

// QUICK SORT: 



void quickSort(int arr[], int s, int e){
  if(s <=e ) return;

  int p = partition(arr, s, e);
  quickSort(arr, s, p -1);
  quickSort(arr, p+1, e);

}

int main(){

}