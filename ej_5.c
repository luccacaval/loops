#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 1000;
  while (i < 1999) {
    printf("%d %d %d %d %d\n", i, i+1, i+2, i+3,i+4, i+5);
    i =i + 5;
  }
  return 0;
}
