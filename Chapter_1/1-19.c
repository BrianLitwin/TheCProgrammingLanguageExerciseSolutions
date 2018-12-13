/*
Write a function reverse (s) that reverses the character
string s. Use it to write a program that reverses its input a line at a time.
*/

#include<stdio.h>
#define MAX_LEN 1000

void Reverse_string(char dest[], char source[], int start, int len);
int getcount(char array[]);

int main() {
  FILE *fp;
  fp = fopen("1-19.txt", "r");
  char buff[MAX_LEN];
  fread(buff, MAX_LEN, 1, fp);

  int count = getcount(buff);
  int start;

  while (start <= count) {

    char array[MAX_LEN];
    int len = 0;
    int c;
    while ((c = buff[start]) != '\n' && c != '\0') {
      array[len] = buff[start];
      len++;
      start++;
    }

    if (c == '\n') {
      Reverse_string(array, buff, start, len);
      printf("%s", array);

    }
      start++;
  }

  printf("\n");
  return 0;
}

int getcount(char array[]) {
  int count = 0;
  while (array[count] != '\0') {
    count++;
  }
  return count;
}

void Reverse_string(char dest[], char source[], int start, int len) {
  int i = 0;
  while (i <= len) {
    dest[i] = source[start];
    i++;
    start--;
  }

}
