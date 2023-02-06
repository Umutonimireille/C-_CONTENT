#include<iostream>
using namespace std;

 struct student {
 	int age;
 	string name;
 
 
 void display () {
 	
 	cout<<"age:"<<age<<endl;
 	cout<<"name:"<<name;
 }

};

int main(){
	
	student s;
	s.age = 10;
	s.name = "babyAli";
	s.display();
//	display();
	
	return 0;
}
