#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough! ssssssssssssssssssssssfggggggggggggggggbfjkdsbjhfbhkdsfgbsdnbcbvdkbvhsdfvsfamafaranga n me";
//  MyFile<<"Hello my file";

  // Close the file
  MyFile.close();
	
	return 0;
}
