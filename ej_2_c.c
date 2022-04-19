#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  double disc = b*b-4*a*c;
  double rp = (-b+sqrt(disc))/(2*a);
  double rm = (-b-sqrt(disc))/(2*a);
  if (a == 0) {
    printf("No se puede dividir por 0\n");
  } else if (disc < 0) {
    printf("No hay raices real\n");
  } else if (disc == 0) {
    printf("%f\n", rp);
  } else {
    printf("%f\n", rp);
    printf("%f\n", rm);
  }
  return 0;
}
