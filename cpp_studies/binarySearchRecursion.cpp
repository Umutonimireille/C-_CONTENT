#include<iostream>
using namespace std;

int binarySearch(int a[] , int start,int end ,int key) {

  int mid = (start+ end)/2;
  
  if(start>= end ) {
  	return -1;
  }	
  if(a[mid] == key){
  	return mid;
  }
  if(a[mid] > key) {
  	end = mid -1;
  }
  else if (a[mid < key]){
  	start = mid +1 ;
  }
  
  return binarySearch(a,key,start,end);
  
  
}

 int main() {
 	
 	int a[] = {1,2,3,4,5};
 	int start = 0;
 	int end = sizeof(a)/sizeof(*a);
 	int key = 3;
 	
 	cout<< binarySearch(a,start,end,key);
 }
