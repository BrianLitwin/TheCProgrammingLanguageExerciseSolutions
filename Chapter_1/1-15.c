/*
Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
use a function for conversion.
*/

#include <stdio.h>

int convert(int);

int main() {
    float fahr, celcius;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;
    fahr = lower;

    printf("%10s\t%10s\n", "fahrenheit", "celcius");

    while (fahr <= upper) {
      celcius = convert(fahr);
      printf("%10.0f\t%9.1f\n", fahr, celcius);
      fahr = fahr + step;
    }

    return 0;
}

int convert(int fahr) {
  return (5.0/9.0) * (fahr - 32);
}
