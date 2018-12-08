/*
Print a celcius to fahrenheit conversion table from 0 to 300, incrementing by 20
use a while loop

output should look like:

fahrenheit	   celcius
         0	    -17.8
        20	     -6.7
        40	      4.4
        60	     15.6
        80	     26.7
       100	     37.8
       120	     48.9
       140	     60.0
       160	     71.1
       180	     82.2
       200	     93.3
       220	    104.4
       240	    115.6
       260	    126.7
       280	    137.8
       300	    148.9

   celcius	fahrenheit
         0	     32.0
        20	     68.0
        40	    104.0
        60	    140.0
        80	    176.0
       100	    212.0
       120	    248.0
       140	    284.0
       160	    320.0
       180	    356.0
       200	    392.0
       220	    428.0
       240	    464.0
       260	    500.0
       280	    536.0
       300	    572.0

*/

#include <stdio.h>

int main() {

    float fahr, celcius;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;

    /* Ex1-3 */

    printf("%10s\t%10s\n", "fahrenheit", "celcius");

    while (fahr <= upper) {
      celcius = (5.0/9.0) * (fahr - 32);
      printf("%10.0f\t%9.1f\n", fahr, celcius);
      fahr = fahr + step;
    }

    printf("\n");

    /* Ex 1-4 */

    celcius = lower;

    printf("%10s\t%10s\n", "celcius", "fahrenheit");

    while (celcius <= upper) {
      fahr = celcius * (9.0/5.0) + 32;
      printf("%10.0f\t%9.1f\n", celcius, fahr);
      celcius += 20;
    }

    

    return 0;
}
