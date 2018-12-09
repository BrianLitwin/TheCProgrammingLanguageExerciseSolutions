
#include <stdio.h>

int main() {
  int previousSpace = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (previousSpace == 0) {
        putchar(c);
        previousSpace = 1;
      }
    } else {
      putchar(c);
      if (previousSpace == 1) {
        previousSpace = 0;
      }
    }
  }

  return 0;
}
