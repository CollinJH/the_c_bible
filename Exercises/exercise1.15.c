#include <stdio.h>

int convertfahr(int fahr);


int main() {

  int fahrenheit = 67;

  printf("%d\n", convertfahr(fahrenheit));

  return 0;
}

int convertfahr(int fahr) {
  int celsius;
  
  celsius = (5/9) * (fahr - 32);


  return celsius;
}
