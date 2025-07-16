#include<iostream>
#include<stack>

using namespace std;

void reverseString(string s){
  stack<string> st; 
  for(int i =0;i<s.length();i++){

    string word = "";
    while(i<s.length() && s[i] != ' '){    // here i'm 
      word+=s[i];
      i++;
    }
    st.push(word);
  }

  // printing the stack 
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();

  }

}

int main(){

  string s = "The Sky is blue";

  reverseString(s);
  
  
}

// Insert an Element at the Bottom of a Stack : https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1




// class Solution {
//   public:
//     stack<int> insertAtBottom(stack<int> st, int x) {
        
//         // Base case -> if stack is empty, push(x) and return;
//         if(st.empty()){
//             st.push(x);
//             return st;
//         }
        
//         int topElement = st.top();
//         st.pop();
        
//         st = insertAtBottom(st, x); // we have initialise it with st as it is passed by value initially not by reference
        
//         st.push(topElement);
//         return st;
        
        
//     }  
// };

// HOMEWORK: 

// Reverse a stack : https://www.geeksforgeeks.org/problems/reverse-a-stack/1


