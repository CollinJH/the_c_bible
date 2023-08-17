#include <stdio.h>

/* copy input to output
 * replace each tab \t, backspace \b, and backslash by //
 * making tabs and backspaces visible
 */



int main() {
  
  int character;

  while((character = getchar()) != EOF) {
    if (character == ('\t')) {
      character = '\\';
      putchar(character);
    } else if (character == ('\b')) {
      character = '\\';
      putchar(character);
    }

    putchar(character);
  }
}
