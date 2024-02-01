#include <stdio.h>
#define max 3

int st[max], top = -1;
void push(int[], int);
int pop(int[]);
int peek(int[]);
void display(int[]);

void push(int st[], int val) {
  if (top == max - 1) {
    printf("\n Stack Overflow");
  } else {
    top++;
    st[top] = val;
  }
}

int pop(int st[]) {
  int val;
  if (top == -1) {
    printf("\n Stack Empty");
    return -1;
  } else {
    val = st[top];
    top--;
    return val;
  }
}

int peek(int st[]) {
  if (top == -1) {
    printf("\n Stack Empty");
    return -1;
  } else {
    return st[top];
  }
}

void display(int st[]) {
  if (top == -1) {
    printf("\n Stack Empty");
  } else {
    for (int i = top; i >= 0; i++) {
      printf("%d", st[i]);
      printf("\n");
    }
  }
}

int main() {
  printf("Executed\n");
  return 0;
}
