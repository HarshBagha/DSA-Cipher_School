#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int row, int col){              // whenever you pass the argument you have to pass the col in argument
  for(int i =0;i<row;i++){
    for(int j = 0;j < col ;j++){
      if(key == arr[i][j]) return true;
    }
  }
  return false;
}
/*
  5 3 2 2
  8 3 6 1
  7 5 9 3

  print the sum of each row by taking the above arr.
*/

void printtheSum(int arr[][4] ){
  int maxsum = 0; 
  for(int row =0;row<3;row++){
    int sum = 0;
    for(int col = 0;col< 4;col++){
      sum += arr[row][col];
    }
    cout<<sum;
    cout<<endl;
    if(maxsum < sum){       // printing the maximum sum among the numbers
      maxsum = sum;
    }
  }  
  cout<<"Maxium sum among the row's sum is = "<<maxsum;
}

// Printing in such a way that after printing the first col. print the second col. from bottom to top
void wavePrint(int arr[][4], int rows, int cols){
  for(int col = 0;col< cols;col++){
    if(col%2==0){
      for(int row = 0 ;row<rows ;row++){
        cout<<arr[row][col]<<" ";
      }
    }
    else{
      for(int row = rows-1; row>=0;row--){
        cout<<arr[row][col]<<" ";
      }
    }
  }
  cout<<endl;
}

// SPIRAL PRINT : 
void spiralprint(int arr[][4], int row, int col){
  int topRow = 0, bottomRow = row -1;
  int leftCol = 0, rightCol = col - 1;

  while(topRow <= bottomRow && leftCol <= rightCol){
    // Print TOP ROW
    for(int i = leftCol; i<=rightCol; i++){
      cout<<arr[topRow][i]<<" ";
    }
    topRow++;
    // Print RIGHT COL 
    for(int i = topRow; i<= bottomRow; i++){
      cout << arr[i][rightCol]<<" ";
    }
    rightCol--;
    // Print BOTTOM ROW
    if(topRow <= bottomRow){
    for(int i = rightCol;i>= leftCol;i--){
      cout<<arr[bottomRow][i]<<" ";
    }
    bottomRow--;
    }
    // Print LEFT COL 
    if(leftCol <= rightCol) {
    for(int i = bottomRow; i>=topRow;i--){
      cout<<arr[i][leftCol]<<" ";
    }
    leftCol++;
  }
}

}


int main(){

  int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  // int arr[3][4] = {5,3,2,2,8,3,6,1,7,5,9,3};
  // cout<<isPresent(arr, 9, 3, 4);
  // printtheSum(arr);
  
  wavePrint(arr,3,4); // dry it for better understanding 
  // spiralprint(arr, 3, 4);
  

  
}

