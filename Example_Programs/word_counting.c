#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main() {
  
  int character, newLine, newWord, newCharacter, state;

  state = OUT;

  newLine = newWord = newCharacter = 0;

  while ((character = getchar()) != EOF) {
    ++newCharacter;
    if (character == '\n') {
      ++newLine;
    }
    if (character == ' ' || character == '\n' || character == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++newWord;
    }
  }
  
  printf("%d %d %d\n", newLine, newWord, newCharacter);

}
