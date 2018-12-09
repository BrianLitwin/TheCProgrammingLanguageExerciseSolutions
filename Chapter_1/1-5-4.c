#include <stdio.h>

int main() {

  int inWord = 0;
  int c, totalChars, totalAlphabetChars, wordCount, spaceCount, newlineCount;
  totalChars = totalAlphabetChars = wordCount = spaceCount = newlineCount = 0;

  while ((c = getchar()) != EOF) {
    totalChars += 1;

    if (c == ' ') {
      spaceCount += 1;
      if (inWord == 1) {
        wordCount += 1;
        inWord = 0;
      }

    } else if (c == '\n') {
      newlineCount += 1;
      if (inWord == 1) {
        wordCount += 1;
        inWord = 0;
      }

    } else {
      inWord = 1;
      totalAlphabetChars += 1;
    }

    printf("total characters: %3d total alphabet characters: %3d words: %3d spaces: %3d newlines: %3d\n", totalChars, totalAlphabetChars, wordCount, spaceCount, newlineCount);
  }

  return 0;
}
