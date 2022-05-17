#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  if ((x > 0 && y > 0) || (x < 0 && y > 0)) {
    double angulo_rad = atan2(y, x);
    double angulo = angulo_rad * (180 / M_PI);
    printf("%0.2f\n", angulo);
    return 0;
  } else if ((x < 0 && y < 0) || (x > 0 && y < 0) ) {
    double angulo_rad = atan2(y, x);
    double angulo = angulo_rad * (180 / M_PI) + 360;
    printf("%0.2f\n", angulo);
    return 0;
  }
  return 0;
}
