// http://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k) { 
  // Complete this method
  struct node* current = head;
  struct node* next = NULL;
  struct node* prev = NULL;
  int count = 0;  

  while (current != NULL && count < k) {
      next  = current->next;
      current->next = prev;
      prev = current;
      current = next;
      count++;
  } 

  if (next !=  NULL) {
    head->next = reverse(next, k); 
  }

  return prev;
}
