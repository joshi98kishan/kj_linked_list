//display node in a singlylinkedlist
void display() {
  int count = 0;
  tempnode = first_node;
  printf("display the linked list");
  while (tempnode != 0) {
    printf(" %d  ", tempnode->value);
    count++;
    tempnode = tempnode -> next;
  }
  printf("\Number of elements in the linked list : %d\n", count);
}
