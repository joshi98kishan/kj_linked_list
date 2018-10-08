#include<iostream.h>
using namespace std;

struct node{
  int data;
  struct node* next;
}*start=NULL;

typedef struct node Node;

void main(){
  
}

Node* createNode(int data){
  Node* ptr;
  ptr=(Node*) malloc(sizeof(Node));
  ptr->data=data;
  ptr->next=NULL;
  
  return ptr;
}
//deleting element at the start of the list
void DeleteAtStart(){
if(start==NULL){
cout<<"node is empty";
return;
}
struct Node* temp;
start=start->next;
free(temp);
}
