#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  int a = 0;
  int b = 1;
  int c;
  int n = atoi(argv[1]);

  if (n == 1) {
    printf("%d\n", a);
  } else if (n == 2) {
      printf("%d\n%d\n", a, b);
  } else {
        printf("%d\n%d\n", a, b);
        for (int i = 3; i <= n; i++) {
         c = a + b;
         printf("%d\n", c);
         a = b;
         b = c;
    }
  }
return 0;
}
