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
  if(*tail == NULL)
    *tail = *head;
  return new_node;
}

void append(int data, Node** head, Node** tail) {
  Node* new_node = new Node(data, NULL);
  if(*head == NULL)
    *head = new_node;
  else
    (*tail)->next = new_node;
  *tail = new_node;
}

void delNode(int position, Node** head) {
  if(position == 1) {
    Node* temp = *head;
    *head = temp->next;
    free(temp);
  }else{
    Node* temp = *head;int i = 0;
    Node* temp2;
    while(++i <= position - 2) {
      temp = temp->next;
    }
    temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
  }
}

int main() {
  Node* head = NULL; Node* tail = NULL;
  //  Node* yo_node = new Node(3,NULL);
  //  new_node->next = yo_node;
  // prepend(12, &head, &tail);
  // prepend(13, &head, &tail);
  // prepend(14, &head, &tail);
  // append(15, &head, &tail);
  // print_list(head);
  append(12, &head, &tail);
  append(13, &head, &tail);
  append(14, &head, &tail);
  append(15, &head, &tail);
  delNode(4, &head);
  print_list(head);
}