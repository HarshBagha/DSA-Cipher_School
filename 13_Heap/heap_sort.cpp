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

  void heapsort(int arr[], int n){
    int size = n;

    while(size>1){
      swap(arr[size],arr[1]);

      size--;
      heapify(arr, size, 1);
    }
  }

};

int main() {
    // Note: using 1-based indexing, so index 0 is dummy
    int arr[] = {-1, 25, 18, 20, 16, 9, 5};  // -1 is dummy, n=6
    int n = 6;

    heap h;

    // Step 1: Build max heap
    for (int i = n / 2; i >= 1; i--) {
        h.heapify(arr, n, i);
    }

    // Step 2: Apply heap sort
    h.heapsort(arr, n);

    // Step 3: Print sorted array
    cout << "Sorted array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
  
  return 0;
}