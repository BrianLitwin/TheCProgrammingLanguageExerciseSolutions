#include <stdio.h>

/*
Exercise 1-10. Write a program to copy its input to its output, replacing each
tab by \ t, each backspace by \b, and each backslash by \ \. This makes tabs
and backspaces visible in an unambiguous way

test blank spaces and newlines from a file you've created 

*/

int main()  {

  char characters[100];
  FILE *fp;

  fp = fopen("1-5-3-file.txt", "r");
  fread(characters, 100, 1, fp);

  int count = sizeof(characters) / sizeof(char);
  int c;

  for (c = 0; c < count; c++) {
    char ch = characters[c];
    if (ch == '\n') {
      printf("%s", "\\n");

    } else if (ch == ' ') {
      printf("%s", "\\b");

    } else {
        printf("%c", ch);
    }
  }

  printf("\n");

  return 0;
}
