#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  if (x > 0 && y > 0) {
    printf("Cuadrante I\n");
    return 0;
  } else if (x < 0 && y > 0) {
    printf("Cuadrante II\n");
    return 0;
  } else if (x < 0 && y < 0){
    printf("Cuadrante III\n");
    return 0;
  } else if (x > 0 && y < 0){
    printf("Cuadrante IV\n");
    return 0;
  }

}
