#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct student
{
    string studentName;
    int age;
    int rollNum;
    double marks;

    void display()
    {
        fstream MyFile;
        MyFile.open("students.txt", ofstream::app);
        if (MyFile.is_open())
        {
            MyFile << rollNum << ", " << studentName << ", " << marks << endl;
            MyFile.close();
        }
        MyFile.open("students.txt", ios::in);
        string myText;
        if (MyFile.is_open())
        {
            while (getline(MyFile, myText))
            {
                cout << myText << endl;
            }
            MyFile.close();
        }
    }
};

int main()
{
    student s1 = {"Mahoro Peace", 17, 201901, 89.8};
    s1.display();
    student s2 = {"Juru Ethan", 17, 201902, 92.5};
    s2.display();
    student s3 = {"Ineza Brianna", 17, 201903, 84.7};
    s3.display();

    return 0;
}
