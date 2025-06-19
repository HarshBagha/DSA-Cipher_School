#include<iostream>
using namespace std;

class Box{
  public:

  int length;
  int width;
  int height;
  
  void calculateArea(){

    cout<<"Your area will be :" << 2 * (length * width + width * height + height * length) <<endl;

  }
  void calculateVolume(){
    cout<<"Your Volume is: "<<length * width * height<<endl;
  }


};
int main(){

  Box box1;
  Box box2;

  box1.length = 12;
  box1.width = 13;
  box1.height = 20; 

  box2.length = 13;
  box2.width = 14;
  box2.height = 30; 

  box1.calculateArea();
  box1.calculateVolume();

  box2.calculateArea();
  box2.calculateVolume();
  






}