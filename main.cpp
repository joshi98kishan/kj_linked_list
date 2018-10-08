#include<iostream>
using namespace std;

struct node{
  int data;
  struct node* next;
}*start=NULL;

typedef struct node Node;
 
void display() {
  int count = 0;
  NODE* tempnode = start;
  printf("display the linked list");
  while (tempnode != Null) {
    printf(" %d  ", tempnode->value);
    count++;
    tempnode = tempnode -> next;
  }
  printf("\Number of elements in the linked list : %d\n", count);
}

void main(){
  
}

Node* createNode(){
  int num;
  cin>>num;
  
  Node* ptr;
  ptr=(Node*) malloc(sizeof(Node));
  ptr->data=data;
  ptr->next=NULL;
  
  return ptr;
}
