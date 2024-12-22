#include <iostream>
using namespace std;

class MyClass{
  public:
    void details();
  };

void MyClass::details(){
cout<<"Name: DAVID ELIREHEMA AKYOO"<<endl;
			cout<<"Reg No: 22100523140058"<<endl;
			cout<<"Course Name: DIPLOMA IN COMPUTER SCIENCE"<<endl;
			cout<<"Year of Study: SECOND YEAR";
 }

int main(){
   MyClass Student;
   Student.details();
   
    return 0;
 }