#include<bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node* next;
  Node(int _data, Node* _next) {
    data = _data;
    next = _next;
  }
};

void print_list(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

Node* prepend(int data, Node** head, Node** tail) {
  Node* new_node = new Node(data, *head);
  *head = new_node;
  if((*tail) == NULL)
    *tail = *head;
  return new_node;
}

int main() {
  Node* head = NULL; Node* tail = NULL;
  prepend(12, &head, &tail);
  prepend(13, &head, &tail);
  prepend(14, &head, &tail);
  print_list(head);
}