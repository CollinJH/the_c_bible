#include <stdio.h>

/* Counts input lines */
int main() {

  int character, newlines, tabs, blanks;

  character = 0;
  newlines = 0;
  tabs = 0;
  blanks = 0;

  while ((character = getchar()) != EOF) {
    if (character == ('\n')) {
      ++newlines;
    } else if (character == ('\t')) {
      ++tabs;
    } else if (character == (' ')) {
      ++blanks;
    }
  }

  printf("%s%d\n", "Newlines: ", newlines);
  printf("%s%d\n", "Tabs: ", tabs);
  printf("%s%d\n", "Blanks: ", blanks);
}

