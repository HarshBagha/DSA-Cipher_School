#include<iostream>
#include<queue>


using namespace std;


int main() {
  priority_queue<int> pq;       // in the backend heapify is carried

  pq.push(10);
  pq.push(20);
  pq.push(30);
  pq.push(40);
  
  cout<<pq.top()<<endl;
  return 0;
}

