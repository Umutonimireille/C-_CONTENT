// #include <iostream>
// #include <fstream>
// using namespace std;

// struct Student {
//     string name;
//     int age;
//     int roll_no;
//  	float marks;
// };

// int main() {
//     Student s;
// //    s.name = "Umutoni Mireille";
// //    s.age = 20;
//  int stnbr;
//   cout << "enter nbr of students:";
//   cin>>stnbr;

//  for(int i = 1; i<= stnbr;i++){

//       cout<<"enter roll_no:";
//   cin >> s.roll_no;
//   cout<<"enter age:";
//   cin >> s.age ;
//   cout<<"enter marks:";
//   cin >> s.marks;
//   cout<<"enter student name:";
//   cin>> s.name;
//   cout<<endl;
// //    cin.ignore();
// }
// //
// //    cout<<" Output student data to the console"<<endl;
// //    cout << "Name: " << s.name << endl;
// //    cout << "Age: " << s.age << endl;
// //    cout<< "Roll_no:"<<s.roll_no<<endl;
// //    cout<<"Marks:"<<s.marks<<endl;

//     // Store student data in a .txt file
//     ofstream file("student.txt",std::ios_base::app);
//     file << s.name<<","<<s.age<<","<<s.marks<<","<<s.roll_no<<endl;


//     file.close();

//     string mystring;
//      ifstream readFile("student.txt");
// //    file.open("student.txt");
//      string data [stnbr][3] = {};
//       if(readFile.is_open()){
//       	while(getline(readFile , mystring )){
//       			size_t pos = 0;
//     		string token;
//     		string delimiter = ",";
//     		int i = 0;
// 		    int j = 0;
// 		    	while ((pos = mystring.find(delimiter)) != string::npos) {
// 			    token = mystring.substr(0, pos);
// 			    cout << token;
// 			    data[i][j] = token;
// 			    j++;
// 			    mystring.erase(0, pos + delimiter.length());
// 			    cout <<endl;
// 			    for(int k =0 ;k<sizeof(mystring)/sizeof(mystring[0]);k++){
// 			    	if(mystring[2] == 10){


// 				}
//                     cout << mystring[k];
// 				}
// 			}
// 			i++;

// //      		cout << mystring<<"\n";

// 		  };
// 	  }







//     return 0;
// }














#include <iostream>
#include <fstream>
#include<vector>
#include <sstream>
#include <type_traits>
#include<ios>
#include<limits>
#include<cmath>
using namespace std;
struct Student{
	string studentName;
	int age;
	int rollNumber;
	float marks;
	
};
void merge(vector<Student>& arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<Student> L, R;
    for (i = 0; i < n1; i++)
        L.push_back(arr[l + i]);
    for (j = 0; j < n2; j++)
        R.push_back(arr[m + 1 + j]);
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i].marks >= R[j].marks) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(vector<Student>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void getStudent(string fileName){
		cout<<"================Register Students===================="<<endl;
		cout<<endl;
	
	ofstream file1;
	file1.open(fileName, ios::out | ios::app);
	Student student;
	if(file1.is_open()){
	cout<<"Enter the student name"<<endl;
	getline(cin,student.studentName);
	file1<<student.studentName<<",";
	cout<<"Enter the student age"<<endl;
	cin>>student.age;
	if(student.age >30 || student.age<10){
		cout<<"Not eligible should be between 10 and 30 years"<<endl;
		exit(0);
	}
	file1<<student.age<<",";
	cout<<"Enter the student roll number"<<endl;
	float roll;
	cin>>roll;
	while(cin.fail()){
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		cout<<"Invalid roll Number re enter an integer:"<<endl;
		cin>>roll;
	}
	if (std::floor(roll) == roll && roll>0) {
		
	    	student.rollNumber=(int)roll;
	    	file1<<student.rollNumber<<",";
    } else {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		cout<<"Invalid roll Number re enter a positive integer:"<<endl;
		cin>>roll;
		student.rollNumber=(int)roll;
		file1<<student.rollNumber<<",";
    }
	
	cout<<"Enter the student marks"<<endl;
	cin>>student.marks;
	if(student.marks<0 || student.marks>50){
		cout<<"Invalid marks try again"<<endl;
		cin>>student.marks;
	}
	file1<<student.marks<<endl;
	file1.close();
		
	}
	else{
		cout<<"Couldn't open file"<<endl;
	}
	
}
void display(string fileName){
	cout<<endl;
	cout<<endl;
	cout<<"================Students===================="<<endl;
	cout<<endl;
	ifstream file;
	file.open(fileName, ios::in);
	string line;
	vector<Student>students;
	cout<<"Studentname"<<"\t"<<"age"<<"\t"<<"roll"<<"\t"<<"marks"<<endl;
	cout<<endl;
	if(file.is_open()){
		string field1,field2,field3;
		
	    while (getline(file, line)) {
	    	Student student;
        stringstream ss(line);
        getline(ss,student.studentName, ',');
        getline(ss,field1, ',');
        getline(ss, field2, ',');
        getline(ss, field3, ',');
        student.age=stoi(field1);
        student.rollNumber=stoi(field2);
        student.marks=stof(field3);
        students.push_back(student);
		
	}
	file.close();
	
	
}
mergeSort(students,0,students.size()-1);
for(int i=0;i<students.size();i++){
	cout<<students[i].studentName+"\t"<<"\t"<<students[i].age<<"\t"<<students[i].rollNumber<<"\t"<<students[i].marks<<endl;
}
int sum=0;
for(int i=0;i<students.size();i++){
	sum+=students[i].marks;
	
}
cout<<"Average : "<<sum/students.size()<<endl;
cout<<"Distinct students : "<<students.size()<<endl;
cout<<endl;
}
int main(){
	ofstream file;
	int choice;
	Label:cout<<"============Welcome=================="<<endl;
	cout<<endl;
	cout<<"Choose in the following"<<endl;
	cout<<endl;
	cout<<"1.Register Student"<<endl;
	cout<<"2.View all Students"<<endl;
	cout<<"3.Exit"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>choice;
	cin.ignore();
	
	switch(choice){
		case 1:
		getStudent("Student.txt");
			break;
		case 2:
		display("Student.txt");
		break;
		case 3:
			cout<<"BYE BYE"<<endl;
			exit(0);
		default:
			cout<<"Invalid choice try again"<<endl;
			
			
		
	}
	goto Label;
		
	return 0;
}