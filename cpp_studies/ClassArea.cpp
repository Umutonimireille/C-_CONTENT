#include<iostream>
using namespace std;

 class Rectangle {
	
  public:int width;
   public:int height;
 
  int area() {
  	return width * height;
  };
};


int main() {
	
	Rectangle rect;
	rect.width = 10;
	rect.height = 30;
	cout<<"Area:"<<rect.area();
	return 0;
	
}
