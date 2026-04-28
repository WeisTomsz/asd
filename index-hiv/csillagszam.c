#include <stdio.h>

int tomb[100];

void feltoltes() {
  int n = 1;
  int i = 0;
  int csillag;

  while (i < 100) {
    csillag = 6 * n * n - 6 * n + 1;

    if (csillag >= 793) {
      tomb[i] = csillag;
      i++;
    }

    n++;
  }
}

int main() {
  feltoltes();
  printf("%d\n", tomb[99]);
  return 0;
}
