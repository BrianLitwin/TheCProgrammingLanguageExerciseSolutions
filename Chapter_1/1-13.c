#include <stdio.h>
#include <string.h>

/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.

"r rr rrrr "
***
 **
  *
  *

*/

void print_vertical_histogram(int nums[], int length) {

  int i;
  int max = 0;

  for (i = 0; i < length; i++) {
    if (max <= nums[i]) {
      max = nums[i];
    }
  }

  for (i = 1; i <= max; i++) {
    int g;
    for (g = 0; g < length; g++) {
      if (nums[g] >= i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

}


int main() {

  int letterC;
  int c;
  int wordCount = 0;
  int words[100];

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      printf("new histogram: \n");
      words[wordCount] = letterC;
      wordCount++;
      print_vertical_histogram(words, wordCount);
      letterC = 0;

    } else {
      letterC += 1;
    }
  }

/* horizontal --> */
/*
  char c;
  int letterC = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {

      int i;
      for (i=0; i<letterC; i++) {
        printf("*");
      }

      printf("\n");
      letterC = 0;
    } else {

      putchar(c);
      letterC += 1;
    }
  }

  return 0;
*/
}
