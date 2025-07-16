#include<iostream>
#include<string>

using namespace std;


// creating a getter and setter for this question as well? 
// create a class Student and in this create private data members name and id: 
class Student{
  private:
  // initialise them private
  
  int id;
  string name;

  public: 

  Student(int i, string n){
    id = i;
    name = n;
  }
 
// create a getter to get id
int getId(){
  return id; 
  
}

// create a setter to set name
void setId(int val){
  id = val;
}
};

int main() {
  Student s1(12210078, "Harsh Bagha");

  
  cout<<"Before change: ";

  cout<<s1.getId()<<endl;

  cout<<"After change: ";

  s1.setId(1222222);

  cout<<s1.getId()<<endl;
  return 0;
}