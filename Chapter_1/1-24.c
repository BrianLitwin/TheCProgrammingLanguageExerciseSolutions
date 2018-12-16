/*
Status: incomplete

Exercise 1-24. Write a program to check a C program for rudimentary syntax
errors like unbalanced parentheses, brackets and braces. Don't forget about
quotes, both single and double, escape sequences, and comments. (This program
is hard if you do it in full generality.)

Consider nested items?
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINES 1000
int balanced(char objects[]);
void print(char lines[]);

int main() {
  char lines[] = "(( [ ] ))";
  print(lines);

  char lines2[] = "(( [ ))";
  print(lines2);

  return EXIT_SUCCESS;
}

void print(char lines[]) {
  int bal = balanced(lines);
  if (bal == 0) {
    printf("%10s", "balanced");
  } else {
    printf("%10s", "unbalanced");
  }
  printf(": %s\n", lines);
}

int balanced(char objects[]) {
  int open_paren = 0;
  int open_brace = 0;
  int i, c;
  for (i = 0; (c = objects[i]) != -1; i++) {
    if (c == '(') {
      open_paren++;
    }
    if (c == ')') {
      open_paren--;
    }
    if (c == '[') {
      open_brace++;
    }
    if (c == ']') {
      open_brace--;
    }

  }
  return (open_paren == 0 && open_brace == 0);
}
