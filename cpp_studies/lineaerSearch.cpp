#include<iostream>
using namespace std;

int linearSearch(int a[] , int n){
	int key = 5;
	
	for( int i = 0; i<n-1;i++){
		if(a[i] == key){
			return i;
		}
		else {
			return -1;
		}
		
		}
	}
	
	int main () {
		int a[] = {4,7,6,5,3,2,9};
		int n = sizeof(a)/sizeof(*a);
		cout <<  linearSearch(a,n);
		return 0;
	}
