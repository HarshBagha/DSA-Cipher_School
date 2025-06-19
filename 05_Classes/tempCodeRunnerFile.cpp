#include<iostream>
using namespace std;
// Constructor:  

// special member func which is called automatically when an object is created
// It will have SAME NAME as of CLASS
// It does not have a return type. 
// Even if you haven't created a constru. it will always called at the backend

class student{
  public: 
  int age;
  string name;
  int rollno;

  // void getname(){        // created a method normally but it's not a constructor method. 
  //   cout<<"getname called"<<endl;
  // }

  // Constructor method : 
  // student(){                 // this type of constructor is called 'DEFAULT constructor'
  //   // cout<<"Constructor called !!"<<endl;

  // }

  student(int age, string name){                
    
    this->age = age;
    this->name = name;
  }

  // ADDING CONSTRUCTOR HAVING 3 PARAMETERS: 
  student(int i, string j, int r){
    age = i;
    name = j;
    rollno = r;
  }
  
};
int main(){

  // student s1;        // after creating this object constructor will automatically gets called. 
  student s1(20, "Student1");
  student s2(19, "Lavish");
  student s3(22, "Baljit", 37199);

  // cout<<s1.age<<" "<<s1.name<<endl;       // age and student var. gets called through constructor 
  cout<<s2.age<<" "<<s2.name<<endl;

  // Printing the 3 parametrised constructor: 

  // cout<<s3.name<<" "<<s3.age<<" "<<s3.rollno<<endl;
  

}

