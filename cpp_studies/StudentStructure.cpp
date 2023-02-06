#include<iostream>
using namespace std;

 struct student {
 	string name;
 	int age;
 	int roll_no;
 	float marks;
 };


int main (){
	
	student s1;

  cout<<"enter s1 roll_no:";
  cin >> s1.roll_no;
  cout<<"enter age:";
  cin >> s1.age ;
  cout<<"enter marks:";
  cin >> s1.marks;
  cout<<"enter name:";
    cin >>s1.name;
//   cin.ignore();
 
//	
	cout<<endl;
	cout << s1.roll_no << "," <<s1.name << "," <<s1.age << "," <<s1.marks<<endl;
	
		student s2;

  cout<<"enter s2 roll_no:";
  cin >> s2.roll_no;
  cout<<"enter age:";
  cin >> s2.age ;
  cout<<"enter marks:";
  cin >> s2.marks;
  cout<<"enter name:";
  cin>>s2.name;
   cin.ignore();
	
	cout << s2.roll_no << "," <<s2.name << "," <<s2.age << "," <<s2.marks<<endl;
	
		student s3;

  cout<<"enter s1 roll_no:";
  cin >> s3.roll_no;
  cout<<"enter age:";
  cin >> s3.age ;
  cout<<"enter marks:";
  cin >> s3.marks;
  cout<<"enter name:";
 cin>>s3.name;
   cin.ignore();
	cout << s3.roll_no << "," <<s3.name << "," <<s3.age << "," <<s3.marks<<endl;
//	
//	
//}

//return 0;






}




//struct student {
//    int id;
//    string name;
//    double grade;
//};
//
//int main() {
//    student s1;
//    cout << "Enter student ID: ";
//    cin >> s1.id;
//    cout << "Enter student name: ";
//    cin >> s1.name;
//    cout << "Enter student grade: ";
//    cin >> s1.grade;
//
//    cout << "Student information:" << endl;
//    cout << "ID: " << s1.id << endl;
//    cout << "Name: " << s1.name << endl;
//    cout << "Grade: " << s1.grade << endl;
//    return 0;
//}


















