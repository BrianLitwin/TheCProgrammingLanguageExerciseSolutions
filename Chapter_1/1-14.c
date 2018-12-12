/* 
Write a program to print a histogram of the frequencies of different
characters in its input.

"one twow"-
e :*
n :*
o :**
t :*
w :**

*/

#include <stdio.h>

int main() {
  int chars[26];
  int letters[26];
  int c;
  int i;

  for (i = 0; i< 26; i++) {
    chars[i] = 0;
  }

  while ((c  = getchar())!= EOF) {
    chars[c - 'a']++;
    letters[c - 'a'] = c;
    printf("\n ------------- \n");
    for (i = 0; i < 26; i++) {
      if (chars[i] > 0) {
        printf("%c :", letters[i]);
        int r;
        for (r=0;r<chars[i]; r++) { 
          printf("*");
        }
        printf("\n");
      }
    }
  }
  return 1;
}
