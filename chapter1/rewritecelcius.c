#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define SETP 20
int main() {
  int farh;
  for (farh = LOWER; farh <= UPPER; farh = farh + SETP) {
    printf("%3d %6.1f\n", farh, (5.0 / 9.0) * (farh - 32));
  }

  return 0;
}
