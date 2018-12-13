
/*

while (there's another line)
  if (it's longer than the previous longest)
    save it
    save its length
print longest line

write functions getLine and copy

do this with a file instead of input

*/

#include <stdio.h>
#define MAX_LEN 1000

int get_line(char arr[], char stream[], int start) {
  int i = 0;

  while (stream[start] != EOF && stream[start]  != '\n') {
    arr[i] = stream[start];
    start++;
    i++;
  }

  if (stream[start] == '\n') {
    arr[start] = '\n';
    start++;
  }

  arr[start] = '\0';
  return start;

}

void copy(char to[], char from[]) {
  int i;
  i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}

void print_line(char line[], int count) {
  int i;
  char c;
  for (i = 0; i < count && (c = line[i]) != '\0'; i++) {
    printf("%c", c);
  }
  printf("\n");
}

int main() {

FILE *fp;
fp = fopen("1-9.txt", "r");
char b[MAX_LEN];
fread(b, MAX_LEN, 1, fp);

int i = 0;
int count;
int max = 0;
char maxLine[MAX_LEN];

for (count = 0; b[count] != '\0'; count++) { }

while (i < count) {
  int start = i;
  char c[MAX_LEN];
  int end = get_line(c, b, start);
  int len = end - start;
  if (len > max) {
    max = len;
    copy(maxLine, c);
  }
  i = end;
}

printf("length of longest line: %d\n", max);
print_line(maxLine, max);

return 0;
}
