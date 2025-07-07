#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> st;    // creating a stack 
    st.push(10);    
    st.push(20);
    
    st.pop();     // remove the top element 
    st.pop();
    
 
    // cout<<st.top()<<endl;        // gives you the top value of the stack 
    cout<<st.empty();             // whether stack is empty or not??

    


}