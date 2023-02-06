#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
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
