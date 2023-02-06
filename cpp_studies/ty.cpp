#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    int numStudents;
    cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter the number of students: \";\n    cin >>"}`&#8203; numStudents;

    Student* students = new Student[numStudents];

    // Input student data
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter student " << i + 1 &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \" name: \";\n        cin >>"}`&#8203; students[i].name;
        cout << "Enter student " << i + 1 &#8203;`oaicite:{"index":2,"invalid_reason":"Malformed citation << \" age: \";\n        cin >>"}`&#8203; students[i].age;
    }

    // Output student data to the console
    for (int i = 0; i < numStudents; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
    }

    // Store student data in a .txt file
    ofstream file("students.txt");
    for (int i = 0; i < numStudents; i++) {
        file << "Name: " << students[i].name << endl;
        file << "Age: " << students[i].age << endl;
    }
    file.close();

    delete[] students;
    return 0;
}

