#include<iostream>
using namespace std;

int main(){
//   for (int i = 0; i < 5;i++){

//     for (int j = i;j<5;j++){

//       if(i+j==5) break;
//       cout<<i<<" - "<<j<<endl;
//     }
// } 

// PATTERN PRINTING:
// 1
// 2 1 
// 3 2 1 
// 4 3 2 1 

// for(int row =1;row<5;row++){
//   for(int col =0;col<row+1;col++){
//     cout<<row;
//   }
//   cout<<endl;
// }

int num =0;
// while(num<5){
//   cout<<num << " ";
//   num++;      // increament operator
// }
// =======================================================================
// DO WHILE LOOP: APPLICATION : FIRST iteration condition is not check so it first execute the code

// cout<<"Output starting from: ";
// do{
//   cout<<num<<endl;
//   num++;
// }while(num<5);
// =======================================================================
// why do we use break and continue ? 


// SWITCH CASES: 

int num1, num2;
char oper;   // because +, - etc all are character

cout<<"Enter an operator (+, -, *, /) : ";
cin>>oper;

cout<<"Enter the 2 numbers: "<<endl;
cin>>num1>>num2;

switch(/*condition ==> */oper ){
  case '+' : 
  cout<<num1+num2<<endl;
  break;      // stops it from moving forwards to next case-

  case '-' : 
  cout<<num1-num2<<endl;
  break;

  case '*' : 
  cout<<num1*num2<<endl;
  break;

  case '/' : 
  cout<<num1/num2<<endl;
  break;
  
  default : 
  cout<<"INVALID !!";


  
}


}


