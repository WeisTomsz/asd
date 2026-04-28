#include <stdio.h>

int legkisebb_paros(int *tomb, int meret) {
  int i = 0;
  int min_paros = -1; /* -1 jelenti, hogy meg nem talaltunk paros szamot */

  while (i < meret) {
    if (*(tomb + i) % 2 == 0) { /* cim szerinti hivatkozas: *(tomb + i) */
      if (min_paros == -1 || *(tomb + i) < min_paros) {
        min_paros = *(tomb + i);
      }
    }
    i++;
  }

  return min_paros;
}

int main() {
  int tomb[] = {7, 10, 11, 100, 101, 200, 201, 300, 301, 400, 401, 402, 20, 21};
  int meret = sizeof(tomb) / sizeof(tomb[0]);
  int eredmeny;

  eredmeny = legkisebb_paros(tomb, meret);

  printf("A legkisebb paros ertek: %d\n", eredmeny);

  return 0;
}
