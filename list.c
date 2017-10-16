#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int i;
  struct node *next;
};

void print_list(struct node *);

struct node * insert_front(struct node *, int);

struct node * free_list(struct node *);

int main() {
  struct node *llist = NULL;
  int i;
  for (i = 0; i < 10; i++) {
    llist = insert_front(llist, i);
  }
  print_list(llist);
  return 0;
}

void print_list(struct node* p) {
  while (p != NULL) {
    printf("%d -> ", p -> i);
    p = p -> next;
  }
  printf("NULL\n");
}

struct node * insert_front(struct node *p, int i) {
  struct node* new = (struct node*)malloc(sizeof(struct node));
  new -> i = i;
  new -> next = p;
  return new;
}
