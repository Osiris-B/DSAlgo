#include <malloc.h>
#include <stdio.h>

struct stack {
  int data;
  struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);
int peek(struct stack *);

struct stack *push(struct stack *top, int val) {
  struct stack *ptr;
  ptr = (struct stack *)malloc(sizeof(struct stack));
  ptr->data = val;

  if (top == NULL) {
    ptr->next = NULL;
    top = ptr;
  } else {
    ptr->next = top;
    top = ptr;
  }
  return top;
}

struct stack *pop(struct stack *top) {
  struct stack *ptr;
  ptr = top;

  if (top == NULL) {
    printf("\n Stack Empty");
  } else {
    top = top->next;
    printf("\n %d", ptr->data);
    free(ptr);
  }
  return top;
}

struct stack *display(struct stack *top) {
  struct stack *ptr;
  ptr = top;

  if (top == NULL) {
    printf("\n Stack Empty");
  } else {
    while (ptr != NULL) {
      printf("\n %d", ptr->data);
      ptr = ptr->next;
    }
  }
  return top;
}

int peek(struct stack *top) {
  if (top == NULL) {
    return -1;
  } else {
    return top->data;
  }
}

int main() {
  printf("Executed\n");
  return 0;
}
