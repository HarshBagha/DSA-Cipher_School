/*
Big O -> represents the upper bound of running time, it gives the worst-case scanerio for an algorithm, (tells maximum time an algo can take)
Theta -> average case
Omega -> lower bound (representing best case) 

--> Common time complexities:
1. O(1) -> constant time : time taken is not dependent on the input size. 
e.g. cout<<"Hello";

2. O(log n) -> logarithmic time : time grows logarithmically as the input size increases (discarding the half part and searching in the other half)
e.g. often scene in algo that divide the input in half : BINARY SEARCH 

3. O(n) -> linear time : time grows directly in proportion to input size 

4. O(n log n) -> linearithmic time : mixture of linear and logarithmic time 
e.g. Common in DIVIDE AND CONQUER algo. like : MERGE SORT AND QUICK SORT 
(break the input and then come back to that)

5. O(n^2) -> Quardratic time : time will grow proportionally to the square of the input size, often scene in algo
e.g. NESTED LOOPS

6. O(2^n) -> Exponential time : the time doubles with each additional element, common in recursive algorithm that solves problems by trying all possibilites
e.g. RECURSION        (considered as very bad complexity)

*/


#include<iostream>
using namespace std;

int main(){

  

}