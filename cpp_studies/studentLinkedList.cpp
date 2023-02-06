#include<iostream>
using namespace std;

class Student {
    public:
    int id;
    string name;
    int age;
    // int roll;
    Student *student;

  Student (int roll,string n ,int a){
    this->id  = roll;
    this->name = n;
    this->age = a;
    this->student = NULL;
  } 
};

void display(Student *f){
    while(f != NULL){
        cout << f->id << "\t" << f->name << "\t" << f->age<<endl;

        f = f->student;
    }
};
int main () {

    Student *student1  = new Student(1,"hdbfd",23);
    Student *student2 = new Student(1,"dddf",3);
    Student *student3 = new Student(1,"ddssd",4);
    Student *student4 = new Student(1,"reeerer",4);
    Student *student5 = new Student(1,"eeeews",67);

    student1->student = student2;
    student2->student = student3;
    student3->student = student4;
    student4->student = student5;
    student5->student = NULL;
    
    display(student1);




    

}