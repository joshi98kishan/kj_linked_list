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
