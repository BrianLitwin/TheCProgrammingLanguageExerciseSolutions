#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  fp = fopen("1-8File.txt", "r");
  char buff[200];
  fread(buff, 200, 1, fp);

  int length = strlen(buff);
  int i;
  int tabs = 0;
  int blanks = 0;
  int n = 0;

  for (i = 0; i < length; i++) {
    int c = buff[i];
    switch (c) {
      case '\t':
        tabs += 1;
        break;
      case '\b':
        blanks += 1;
        break;

      case '\n':
        n += 1;
        break;
    }
  }

  printf("tabs: %d & blanks: %d & new lines: %d", tabs, blanks, n);
  return 0;
}
