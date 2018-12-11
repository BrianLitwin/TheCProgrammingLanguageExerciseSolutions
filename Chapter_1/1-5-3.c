#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  char buf[200];

  fp = fopen("1-5-3-file.txt", "r");
  fread(buf,  200, 1, fp);

  int c, n = 0;

  int charCou = strlen(buf);

  for (c = 0; c < charCou; c++) {
    if (buf[c] == '\n') {
      n += 1;
      printf("%d\n", n);
    }
  }

  printf("Number of new lines: %d\n", n);

  return 0;
}
