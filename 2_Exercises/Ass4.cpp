#include <iostream>
#include <fstream>
#include<vector>
#include <sstream>
#include <type_traits>
#include<ios>
#include<limits>
#include<cmath>
using namespace std;
struct Student {
    string name;
    int rollNumber;
    int age;
    int marks;
};

bool checkValid(int age, int marks) {
    return age >= 10 && age <= 30 && marks >= 0 && marks <= 50;
}

void mergeArrays(vector<Student>& arr, int l, int m, int r) {
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
        mergeArrays(arr, l, m, r);
    }
}
int main() {
    vector<Student> students1;
    for (int i = 0; i < 5; i++) {
        Student student;
        cout << "========================== Enter students " << i + 1 << " info ==" << endl;
        cout<<"==== enter name : ";
        cin>>student.name;
	cout<<"Enter the student roll number"<<endl;
	float roll;
	cin>>roll;
	while(cin.fail()){
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		cout<<"Invalid rollNumber re-enter:"<<endl;
		cin>>roll;
        student.rollNumber=(int)roll;

	}
	if (std::floor(roll) == roll && roll>0) {
		
	    	student.rollNumber=(int)roll;

    } else {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		cout<<"Invalid rollNumber re-enter positive integer:"<<endl;
		cin>>roll;
		student.rollNumber=(int)roll;

    }
 
        cout << "======= Age: ";
        cin >> student.age;
        cout << "======== Marks: ";
        cin >> student.marks;
        if (!checkValid(student.age, student.marks)) {
            cout << "Invalid info.  try again ! " << endl;
            i--;
            continue;
        }
        students1.push_back(student);
    }

    ofstream file("st.txt",std::ios_base::app);
    for (int i = 0; i < students1.size(); i++) {
        file<<students1[i].name<<"," << students1[i].rollNumber << "," << students1[i].age << "," << students1[i].marks << endl;
    }
    file.close();
    ifstream inFile("st.txt");
    string line;
    vector<Student>students;
    cout << "================================== Sorted student data:=================================" << endl;
    cout<<"Studentname"<<"\t"<<"age"<<"\t"<<"rollNumber"<<"\t"<<"marks"<<endl;
    cout<<endl;
        if(inFile.is_open()){
        string input1,input2,input3;
        while (getline(inFile, line)) {
            Student student;
        stringstream ss(line);
        getline(ss,student.name, ',');
        getline(ss,input1,',');
        getline(ss, input2,',');
        getline(ss, input3,',');
        student.age=stoi(input1);
        student.rollNumber=stoi(input2);
        student.marks=stoi(input3);
        students.push_back(student);
    }
    file.close();

}
    mergeSort(students,0,students.size()-1);
for(int i=0;i<students.size();i++){
    cout<<students[i].name+"\t"<<"\t"<<students[i].age<<"\t"<<students[i].rollNumber<<"\t"<<students[i].marks<<endl;
}
    int totalMarks = 0;
    for (int i = 0; i < students.size(); i++) {
        totalMarks += students[i].marks;
    }
    cout << "=============== Average marks: " << (double) totalMarks / students.size() << endl;
    cout << "=============== Number of distinct students: " << students.size() << endl;
return 0;
}