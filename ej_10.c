#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
  int mayor = INT_MIN;
  int menor = INT_MAX;
  int prom = 0;
  double total = 0;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    if (num > mayor) {
      mayor = num;
}
    if (num < menor) {
      menor = num;
    }
    total += num;
}
  double avg = total / (argc - 1);
  printf("%d\n", mayor);
  printf("%d\n", menor);
  printf("%.2f\n", avg);
  return 0;
}
