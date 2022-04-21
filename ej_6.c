#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int n2 = atoi(argv[1]);
  int prom = 0;
  int res = 0;
  while (n > 0) {
    prom = prom + (rand() % 101);
    printf("%d\n", prom);
    n =n - 1;
  }
  res = prom / n2;
  printf("%d\n", res);
  return 0;
}
