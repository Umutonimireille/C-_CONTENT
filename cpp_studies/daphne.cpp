#include<iostream>
using namespace std;

int daphne(int arr[],int len) {


int rtn = 0;


for(int j = 0 ; j<sizeof(arr)/sizeof(*arr);j++){
	
	if(arr[j]%2!=0 ){
		rtn  = 1;
	}
	else if (arr[j]%2!=0){
		rtn = 1;
	}
	else{
		rtn  = 0;
	}
	


}
	return rtn;

}

int main(){
   
   int len;
 
  cout<<"enter an array size:";
  cin>>len;
//  cout<<len;
  int arr[len] = {};
 
  
  for (int i = 0 ; i< sizeof(arr)/sizeof(*arr) ;i++){
  	 cout<<"enter the elements of the array"<<i<<" :";
  	cin>>arr[i];
  }

    cout<<daphne(arr,len);
	
	return 0;
}
