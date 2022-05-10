#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
  int mayor = INT_MIN;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    if (num > mayor) {
      mayor = num;
    }
  }
  printf("%d\n", mayor);
  return 0;
}
