#include <stdio.h>

/* this will count the number of occurrences of each digit
 * of white space characters (blank, tab, newline)
 * there are 12 categories of input
 * so we use an array to hold the occurences of each digit
 * */

int main() {

  int character, i, white, other;
  int anArray[10];

  white = other = 0;
  
  /* initialize the array */
  for (i = 0; i < 10; ++i) {
    anArray[i] = 0;
  }

  while ((character = getchar()) != EOF) {
    if (character >= '0' && character <= '9') {
      ++anArray[character-'0'];
    } else if (character == ' ' || character == '\n' || character == '\t') {
      ++white;
    } else {
      ++other;
    }
  }

  printf("digits =");
  for (i = 0; i < 10; ++i) {
    printf(" %d", anArray[i]);
  }

  printf(", white space = %d, other = %d\n", white, other);
}
