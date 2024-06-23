#include <stdio.h>

int main() {
  int c, nl, nt, nb, ouput;
  nl = 0;
  nt = 0;
  nb = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++nb;
    }
    if (c == '\t' || c == '\b') {
      c = '\\';
    }
    putchar(c);
  }
  return 0;
}
