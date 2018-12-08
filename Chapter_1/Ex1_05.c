/*

print the fahrenheit to celcius conversion table using a while loop and
only one variable (fahr)
print fahr as an integer and celcius as floating-point with 6 spaces and 1 digit after decimal
(5/9)(f-32)
*/

#include <stdio.h>

int main() {
  int fahr;

  for (fahr = 0;fahr <= 300; fahr += 20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  return 0;
}
