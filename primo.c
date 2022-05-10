#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int i = 2;
  while (i < (n-1)) {
    if (n % i == 0) {
      printf("No es primo\n");
      return 0;
    }
    i++;
  }
  printf("es primo\n");
  return 0;
}
