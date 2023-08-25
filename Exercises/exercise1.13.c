#include <stdio.h>

/* write a program to print a histogram of the lengths of words in input */

int main() {
  
  int character, integer, nwords, wlength;
  int anArray[10];

  for (int i = 0; i < 10; ++i) {
    anArray[i] = 0;
  }
  wlength = nwords = 0;


  while ((character = getchar()) != EOF) {
    
    if (character != ' ' && character != '\n' && character != '\t') {
      ++wlength;
    } else if (character == ' ' || character == '\n' || character == '\t') {
      for (int i = 0; i < wlength; ++i) {
        putchar('-');
      }
      wlength = 0;
      putchar('\n');
    }
  }
}
