#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (a % b == 0) {
    printf("%d\n", a / b);
  } else {
    printf("No se pueden dividir\n");
  }
  return 0;
}
