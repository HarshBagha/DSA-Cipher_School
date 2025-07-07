#include<iostream>
#include<queue>
using namespace std;

int main(){

  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);

  q.pop();
  
  cout<<"Front: "<<q.front()<<endl;
  cout<<"Rear: "<<q.back()<<endl;
  cout<<"Size: "<<q.size()<<endl;        // give size of the queue from 1
  cout<<"Empty: "<<q.empty()<<endl;     // give weather queue is empty or not




}