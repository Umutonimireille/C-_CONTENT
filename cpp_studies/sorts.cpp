#include<iostream>
using namespace std;
int main(){
	
	
	// inserion
for(int i = 1;i<n-1;i++){
	int j = i-1;
	int key = arr[i];
	while(j>=0&&arr[j]>temp){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = temp;
}
	// bubble
	for( int i = i ; i<9; i++){
		for( int j = 0 ;<n-1;j++){
			if(arr[j+1] <arr[j]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	
	// selection
	for(int i = 0 ;i<5-1;i++){
		for(int j = i+1;j<5;j++){
			index = i;
			if(arr[j]<arr[index]){
				index = j;
			}
		}
		swap(arr[j],arr[index]);
	}
	
	return 0;
}
