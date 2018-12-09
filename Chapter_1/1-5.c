/*
print the fahrenheit to celcius conversion table using a while loop. Use only one variable (fahr).
print fahr as an integer and celcius as floating-point with 6 spaces and 1 digit after decimal;
(5/9)(f-32). Then do the same thing, except in reverse order.

0  -17.8
20   -6.7
40    4.4
60   15.6
80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9

*/

#include <stdio.h>

int main() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr += 20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  printf("\n");

  for (fahr = 300; fahr >= 0; fahr -= 20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  return 0;
}
