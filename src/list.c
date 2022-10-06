#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    //  
    int count = 0; //counter for elements
    assert(l!=NULL); //terminates if l is equal to NULL
    node *p = l; 
    while (p->next!=NULL){ //Counts through all elements 
      p = p->next; //p gets the next value
      count+=1;  //add 1 to count
    }
    return count;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next;
    while (p!=NULL){
      printf("%d, ",p->data);
      p=p->next; 
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
      node *p = l->next;
      int max = p->data;
      while(p!=NULL){ //Runs while loop while p is different from NULL and goes through elements
        if (p->data > max){ //if the value of data is bigger than max then max becomes p->data
          max = p->data; 
        }
      p = p->next; //next element
      }
    return max; 
}

