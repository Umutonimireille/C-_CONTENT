#include<iostream>
using namespace std;

class Rectangle {
	int width;
	int height;
	public :
		void set_values(int  ,int );
    Rectangle(int a ,int b){
    	width = a;
    	height = b;
	}
		int area  (){
			return width*height;
		}
		
};

void Rectangle::set_values(int x, int y){
	width = x;
	height = y;
}

int main() {
	Rectangle rect(4,5);
//	Rectangle * rect = new Rectangle();
//	rect->set_values(3,5);
	cout<<"area:"<<rect.area();
	
	Rectangle rect1  = Rectangle(3,4);
	cout<<"area:"<<rect1.area();
	return 0;
	
}
