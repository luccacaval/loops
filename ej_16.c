#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 1; i <= n; i++) {
    printf("%d %d\n", i, i * i);
  }
  return 0;
}
