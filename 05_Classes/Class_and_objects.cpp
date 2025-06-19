  #include<iostream>
  using namespace std;

  // class: serves as a blueprint for creating objects contains data attributes and data members 
  // objects: encapsulates both data (attributes) and functions (methods)
  // When you define a class, you are creating a blueprint; when you create an object, you are 
  // creating an actual entity in memory based on that blueprint

  // Creating a class =  Name: Student

  class /*className => */Student{                      // all entities in this class are private by default
    public:                 // Access specifier        // now attributes can be access outside the class 
    // attributes : data members 

    string name;
    int age;
    int id;
    
    // behaviour : Member functions
    void getage(){

    cout<<"Age of student is: "<< age <<endl;
  }
    // void function used to print student name ? 

    void getname(){
      cout<<"Name of the student is: "<< name << endl;
    }

    // non void: to print student name? 

    string Name(){
      return name;
    }


};

int main(){

    Student s1;          // created a obj named s1
    Student s2;

    s1.name = "Person1";     
    s2.name = "Harsh";     
    
    // giving ID and age to s2 

    s2.age = 21;
    s2.id = 12210078;

    // int value;
    // cout<<"Give your value: ";
    // cin>>value;
    // s2.id = value;

    // cout<< s1.name<<endl;
    // cout<< s2.name<<endl;
    // cout<< "Your age: "<< s2.age <<endl;

    // s2.getage();
    // cout<< "Your ID: " << s2.id <<endl;

    cout<<"Your Student name: "<< s2.Name()<<endl;         // Non-void 
    s2.getname();                   // void 

}