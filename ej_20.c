#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (a > b) {
    printf("El segundo argumento tiene que ser mayor que el primero\n");
    return 0;
  }

  for (int i = a; i <= b; i++) {
    if (i % 3 == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
