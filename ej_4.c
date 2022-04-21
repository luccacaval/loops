#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = atoi(argv[1]);
  while (i > 0) {
    printf("Hola mundo\n");
    i = i - 1;
  }
  return 0;
}
