#include <stdio.h>
#define MAX_L 10000



int main() {
  FILE *fp;
  fp = fopen("1-20-helper.txt", "r");
  char text[MAX_L];
  fread(text, MAX_L, 1, fp);
  int i, c, cons_spaces;
  i = 0;
  cons_spaces = 0;
  while ((c = text[i]) != EOF) {
    if (c == ' ') {
      cons_spaces += 1;
    } else {
      if (cons_spaces > 0) {
        printf("%d spaces\n", cons_spaces);
        printf("%d tabs should be added\n", cons_spaces / 4);
        printf("%d additional spaces to\n", cons_spaces % 4);
        printf("\n --- \n");
      }
      cons_spaces = 0;
    }
    i++;
  }
  return 0;
}
