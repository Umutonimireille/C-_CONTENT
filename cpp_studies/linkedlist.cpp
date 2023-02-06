#include <iostream>

class Node {
public:
  int data;
  Node* next;
};

void insertAfter(Node* prev_node, int data) {
  if (prev_node == NULL) {
    std::cout << "Previous node cannot be NULL" << std::endl;
    return;
  }
  Node* new_node = new Node();
  new_node->data = data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertInLinkedList(Node*& head, int data, int key) {
  Node* current = head;
  while (current != NULL && current->data != key) {
    current = current->next;
  }
  if (current != NULL) {
    insertAfter(current, data);
  } else {
    std::cout << "Key not found in the linked list" << std::endl;
  }
}

int main() {
  Node* head = NULL;
  insertInLinkedList(head, 7, 5);
  return 0;
}
