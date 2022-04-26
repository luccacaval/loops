#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int counter = atoi(argv[1]);
  int counter2 = counter;
while (counter2 > 0) {
  if (counter2 % 2 == 0) {
  while (counter > 0) {
    if (counter % 2 == 0) {
      printf("+");
    } else {
      printf("*");
    }
    counter--;
  }
} else {
  while (counter > 0) {
    if (counter % 2 == 0) {
      printf("*");
    } else {
      printf("+");
    }
    counter--;
  }
}
counter = atoi(argv[1]);
printf("\n");
counter2--;
}
return 0;
}
