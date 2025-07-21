#include<iostream>

using namespace std;

// WHY WE USING THE HEAP: 
// e.g. In priority queue in the backend the heap concept is working over there 
// like in max heap we put the largest value at the top same like in priority queue. 

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

  // Printing the result: 
  
  void print(){
    for(int i =0;i<=size;i++){
      cout << arr[i] <<" ";
    }
  }

  // Deleting the elements in Heap:
  
  void deletion(){
    if(size == 0){
      cout<<"Nothing to Delete"<<endl;
      return;
    }
    arr[1] = arr[size];
    size--;

    int i = 1;

    while(i<size){

      int left = 2 * i;
      int right = 2 * i +1;

      if(arr[i] < arr[left]){
        swap(arr[i], arr[left]);
        i = left;
      }
      else if(right<size && arr[i]<arr[right]){
        swap(arr[i], arr[right]);
        i = right;
      }
      else return;
    }
  }

  
};

int main() {
  heap h;
  h.insert(20);
  h.insert(10);

  h.insert(8);

  h.insert(5);
  h.insert(7);
  // h.insert(11);      // by this you can check your condition of swap 

  h.print();
  h.deletion();
  cout<<endl;
  h.print();
  
  return 0;
}