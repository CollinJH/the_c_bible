#include <stdio.h>

/* copy input to output
 * if there are more than one blank between words
 * replace with a single blank
*/

int main() {
  
  int character, blanks;

  blanks = 0;

  while((character = getchar()) != EOF) {
    if (character == ' ') {
      putchar(character);
      while ((character = getchar()) == ' ') {}
    }
  putchar(character);
  
  }
}


