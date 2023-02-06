#include<iostream>
using namespace std;

class Rectangle {
	int width;
	int height;
	public :
		void set_values(int  ,int );
		int area  (){
			return width*height;
		}
		
};

void Rectangle::set_values(int x, int y){
	width = x;
	height = y;
}

int main() {
	Rectangle * rect = new Rectangle();
	rect->set_values(3,5);
	cout<<"area:"<<rect->area();
	return 0;
	
}
