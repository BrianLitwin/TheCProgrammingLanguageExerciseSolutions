/*
Exercise 1-23. Write a program to remove all comments from a C program.
Don't forget to handle quoted strings and character constants properly. C comments
do not nest.
*/

#include <stdio.h>

#define MAX_L 200

int main() {
  FILE *fp;
  fp = fopen("1-23-file.c", "r");
  char array[MAX_L];
  fread(array, MAX_L, 1, fp);

  int i;
  char c;
  char prevChar;
  int inQuotes = 0;
  int inComm = 0;
  char commentType;

  for (i = 1; (c = array[i]) != '\0'; i++) {
    prevChar = array  [i - 1];

    if (inComm == 1) {
      printf("%c", c);
    }

    if (c == '\n' && commentType == '/') {
      inComm = 0;
    }

    if (c == '/' && inQuotes == 0) {
      if (prevChar == '/') {
        printf("\n");
        inComm = 1;
        commentType = '/';
        printf("//");
      }
      if (prevChar == '*') {
        inComm = 0;
      }
    }

    if (c == '*' && inQuotes == 0)  {
      if (prevChar == '/') {
        inComm = 1;
        commentType = '*';
        printf("/*");
      }

    } else if (c == '\"') {
      if (inComm == 0 && inQuotes == 0) {
        inQuotes = 1;
      } else if (inQuotes == 1) {
        inQuotes = 0;
      }

    }

  }

  return 0;
}
