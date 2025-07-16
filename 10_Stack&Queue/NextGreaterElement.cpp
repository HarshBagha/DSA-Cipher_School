#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;

    // Traverse from right to left
    for(int i = n - 1; i >= 0; i--) {
        // remove smaller or equal elements
        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // if stack is not empty and top is the next greater
        if(!st.empty()) {
            result[i] = st.top();
        }

        // push the current element 
        st.push(arr[i]);
    }
    return result;
}

// Main function
int main() {
    vector<int> input = {4, 5, 2, 10, 8};

    vector<int> output = nextGreaterElement(input);

    cout << "Next Greater Elements: ";
    for(int num : output) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}













