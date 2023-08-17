#include <stdio.h>

/* symbolic constants */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;


  /* fahr starting at 0, increments by 20 */
  /* program will print out corresponding celsius for each 20 fahr */
  
  fahr = lower;
  
  printf("Fahrenheit\tCelcius\t \n");


  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%4.0f %17.2f\n", fahr, celsius);

    fahr = fahr + step;
  }

  printf("Celsius\t\tFahrenheit\t \n");

  celsius = lower; 

  while(celsius <= upper) {
    fahr = (celsius * (9.0 / 5.0) + 32.0);
    printf("%4.0f %17.1f\n", celsius, fahr);

    celsius = celsius + step;
  }


  /* For Statement */

  for (int f = 300; f >= 0; f = f - 20) {
    printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
  }

  for (int f = LOWER; f <= UPPER; f = f + STEP) {
    printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
  }
}
