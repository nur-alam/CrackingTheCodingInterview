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

void append(int data, Node** head, Node** tail) {
  Node* new_node = new Node(data, NULL);
  if(*head == NULL)
    *head = new_node;
  else
    (*tail)->next = new_node;
  *tail = new_node;
}

Node* ReverseList(Node* head) {
  Node *current, *prev, *next;
  current = head;
  prev = NULL;
  while(current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  return head;
}

int main() {
  Node* head = NULL; Node* tail = NULL;
  append(12, &head, &tail);
  append(13, &head, &tail);
  append(14, &head, &tail);
  append(15, &head, &tail);
  print_list(head); cout << endl;
  head = ReverseList(head);
  print_list(head); cout << endl;
}