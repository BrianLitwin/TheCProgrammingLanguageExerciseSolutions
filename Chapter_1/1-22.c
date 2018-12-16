/*
Exercise 1-22. Write a program to "fold" long input lines into two or more
shorter lines after the last non-blank character that occurs before the n-th
column of input. Make sure your program does something intelligent with very
long lines, and if there are no blanks or tabs before the specified column.

*/

#include <stdio.h>

#define MAX_LENGTH 1000
void Alter_array(char finalLines[], int i);
void print(char finalLines[]);

int main() {
  FILE *fp;
  char lines[MAX_LENGTH];
  fp = fopen("1-22-text.txt", "r");
  fread(lines, MAX_LENGTH, 1, fp);

  int n, i, last_blank;
  n = 20;

  /*
  walk through the array, saving the index of each space you find, and
  when the index of the array signifies a new line c count > 20,
  find the most recent index and insert a newline character there.
  */

  for (i = 0; lines[i] != '\0'; i++) {
    // printf("i: %2d last blank: %2d   \n", i, last_blank);
    if (lines[i] == ' ') {
      last_blank = i;
    }
    if (i >= n && last_blank != -1) {
      int end = i + 1;
      int j = last_blank;
      for (j = end; j > end; j--) {
        lines[j + 1] = lines[j];
      }
      lines[last_blank] = '\n';
      last_blank = -1;
      n += 20;
      i++;
    }
  }

  print(lines);
  return 0;
}


void Alter_array(char finalLines[], int i) {
  printf("adding newline at %d\n", i);

}

void print(char lines[]) {
  int i;
  for (i = 0; lines[i] != '\0'; i++) {
    putchar(lines[i]);
  }
}
