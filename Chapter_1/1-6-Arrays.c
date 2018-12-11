#include <stdio.h>

int main() {
  int digits[10];
  int c;

  int i;
  for (i = 0; i < 10; i++) {
    digits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c <= '9' && c >= '0') {
      digits[c-'0']++;
    }

    int i;
    for (i = 0; i < 10; i++) {
      printf("%d", digits[i]);
    }
    printf("\n");
  }

  return 0;
}
