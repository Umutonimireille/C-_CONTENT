#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};
struct Node* head ;

void print(){
	Node* temp = head;
	while(temp != NULL){
		cout<<endl<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
}

void insert(int data,int n){
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	if(n==1){
		temp1->next = head;
		head = temp1;
		return ;
	}
	
	Node* temp2 = head;
	for(int i = 0; i<n-2;i++){
		temp2  = temp2->next;
	}
	
	temp1->next = temp2->next;
	temp2->next = temp1;
}

int main () {
	head = NULL;
	insert(2,1);
	insert(3,2);
	insert(4,1);
	insert(5,2);
	print();
	
}
