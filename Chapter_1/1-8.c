#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  fp = fopen("1-8-file.txt", "r");
  char lines[100];
  fread(lines, 100, 1, fp);

  int count = strlen(lines);
  int i = 0;
  int spacecount = 0;
  int newlines = 0;

  for (i=0;i<count;i++) {
    int c = lines[i];
    if (c == '\n') {
      newlines += 1;
    }
    if (c == ' ') {
      spacecount += 1;
    }
  }

  printf("spacecount = %d newlines count = %d \n", spacecount, newlines);

  return 0;
}
