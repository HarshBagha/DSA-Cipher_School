#include<iostream>

using namespace std;
class heap{
  public:
  int arr[100];
  int size;
  
  heap(){
    arr[0] = -1;
    size = 0;
  }

  // Inserting that elements: 
  void insert(int val){
    size = size +1;
    int i = size;

    arr[i] = val;

    // Comparing child with parent incase child is greater: 
  
    while(i>1){
      int parent = i/2;          // get the formulas which sir told you in the class.
      if(arr[parent] < arr[i]){
        swap(arr[parent], arr[i]);          // swaping parent one with i one
        i = parent;
      }
      else return;
    }

  }


  void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2*i+1;

    if(left<n && arr[largest] <arr[left]){
      largest = left;
    }
    if(right<n && arr[largest] < arr[right]){
      largest = right;
    }
    if(largest!= i){
      swap(arr[largest], arr[i]);
      heapify(arr, n, largest);
    }
  }
  void print(){
    for(int i = 0 ;i<size;i++){
      cout<<arr[i]<<" ";
    }
  }
  

};

int main() {
  heap h;

  // h.insert(20);
  // h.insert(10);
  // h.insert(8);
  // h.insert(5);
  // h.insert(7);

  int arr[] = {-1, 7, 8, 10, 15, 6};
  int n = 5;
/*
 Why Start from i = n/2?


 In a binary heap (usually represented as an array):
 The elements from index n/2 + 1 to n are all leaf nodes.
 Leaf nodes are already valid heaps because they don't have any children.
 So you only need to heapify the internal (non-leaf) nodes, which are from:
 Index n/2 down to 1.

 This is why:
*/
  for(int i = 0; i<=n ;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i = n/2; i>0; i--){
    h.heapify(arr, n, i);
  }

  for(int i = 0; i<=n ;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

