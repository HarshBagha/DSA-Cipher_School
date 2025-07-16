#include<iostream>
#include<stack>
#include<cmath>
#include<sstream>


using namespace std;

int prefixEval(string s){

  stack<int> st; 
  for(int i = s.length()-1; i>=0; i--){

    if(s[i] >= '0' && s[i] <='9'){
      st.push(s[i]-'0');            // we minus the ASCII value of 0 to get the integer value of the ith index value 
    }
    else{
      int operand = st.top();
      st.pop();
      int operand2 = st.top();
      st.pop();

      switch(s[i]){
        case '+':
        st.push(operand + operand2);
        break;

        case '-':
        st.push(operand - operand2);
        break;

        case '*':
        st.push(operand * operand2);
        break;

        case '/':
        st.push(operand / operand2);
        break;

        case '^':
        st.push(pow(operand, operand2));
        break;
      }
    }
  }
  return st.top();

}


// Postfix Evaluation Function
int postfixEval(string s) {
    stack<int> st;
    istringstream iss(s); // Use string stream for tokenizing the string
    string token;
     while (iss >> token) {
        if (isdigit(token[0]) || (token.length() > 1 && token[0] == '-')) {
            // It is a number (also handles negative numbers)
            st.push(stoi(token));
        } else {
            // Operator
            int operand2 = st.top(); st.pop();
            int operand1 = st.top(); st.pop();

            switch (token[0]) {
                case '+': 
                st.push(operand1 + operand2); 
                break;

                case '-': 
                st.push(operand1 - operand2); 
                break;

                case '*': 
                st.push(operand1 * operand2); 
                break;

                case '/': 
                st.push(operand1 / operand2); 
                break;

                case '^': 
                st.push(pow(operand1, operand2));
                break;

            }
        }
    }

    return st.top();
}


int main(){

  cout<<prefixEval("-+7*45+20")<<endl;
  cout << "Postfix Evaluation: " << postfixEval("100 20 /") << endl;

}

// HOME WORK: 
// POSTFIX evaluation ??