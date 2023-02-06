#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	string Mytext;
	ifstream MyReadFile("filename.txt");
	cout<<endl;
	
	while(getline(MyReadFile,Mytext)){
		
		cout<<Mytext;
	};
	
	MyReadFile.close();
	
	return 0;
}
