/*
Write a program to remove trailing blanks and tabs from each
line of input, and to delete entirely blank lines


ammended: remove blanks and blank lines

note: apparently  '\0' = end of file ?

*/

#include <stdio.h>

#define MAX_LEN 1000

int main() {
  FILE *fp;
  fp = fopen("1-9.txt", "r");

  char ar[MAX_LEN];
  fread(ar, MAX_LEN, 1, fp);

  char i, c;
  i = 0;
  int prev_is_blank = 0;

  while ((c = ar[i]) != '\0') {

    if (c == '\n') {
      if (prev_is_blank == 0) {
        printf("%c", c);
        prev_is_blank = 1; 
      }

    } else if (c == ' ') {
      prev_is_blank = 1;

    } else {

      printf("%c", c);
      prev_is_blank = 0;

    }

    i++;
  }

  printf("\n");
  return 0;

}
