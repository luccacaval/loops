#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i <= 100; i++) {
    if (i % n == 3) {
      printf("%d\n", i);
    }
  }
  return 0;
}
