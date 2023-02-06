#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};
    void display(Node *node)
{
    while (node != NULL){
        cout <<  node->data << endl;
        node = node ->next;
        cout<<"next address"<<node->next<<endl;
        node = node->next;
    }
}
int main()
{
    Node *first = new Node();
    Node *second = new Node();
    first->data = 10;
    first->next = second;
    second->data = 15;
    Node *third = new Node();
    second->next = third;
    third->data = 30;
    third->next= NULL;
    display(first);
}
//void printList(Node* n)
//{
//while (n != NULL) {
//cout << n->data << " ";
//n = n->next;
//}
//}int main()
//{
//Node* head = NULL;
//Node* second = NULL;
//Node* third = NULL;
//// allocate 3 nodes in the heap
//head = new Node();
//second = new Node();
//third = new Node();
//head->data = 1; // assign data in first node
//head->next = second; // Link first node with
//second->data = 2; // assign data to second node
//second->next = third;
//third->data = 3; // assign data to third node
//third->next = NULL;
//// Function call
//printList(head);
//return 0;
//}
