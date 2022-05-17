#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  printf("%d\n", a);
  return 0;
}
