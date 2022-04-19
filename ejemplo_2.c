#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int rta = atoi(argv[1]);
  if (rta == 42) {
    printf("Correcto\n");
  } else {
    printf("Nunca lo sabras\n");
  }
  return 0;
}
