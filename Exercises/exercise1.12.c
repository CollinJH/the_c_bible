#include <stdio.h>

/* write a program that prints its input one word per line */

#define IN 1
#define OUT 0

int main() {
  
  
  int character, state;

  state = OUT;
  while ((character = getchar()) != EOF) {
    
    if (character != (' ') && character != ('\n') && character != ('\t')) {
      if (state == OUT) {
        state = IN;
      }
      putchar(character);
    } else if (state == IN) {
      state = OUT;
      putchar('\n');
    }
  }
}

