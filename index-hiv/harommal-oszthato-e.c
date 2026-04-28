#include <stdio.h>

void feltolt(int tomb[], int meret) {
  int szam = 1020;
  int i = 0;

  while (i < meret) {
    /* Ellenorzom, hogy osztható-e 3-mal */
    int osztható = (szam % 3 == 0);

    /* Ellenorzom, hogy a tízesek helyén 2-es van-e */
    /* A tízesek jegye: (szam / 10) % 10 */
    int tizes = (szam / 10) % 10;
    int van_kettes = (tizes == 2);

    if (osztható && van_kettes) {
      tomb[i] = szam;
      i++;
    }

    szam++;
  }
}

int main() {
  int tomb[100];

  feltolt(tomb, 100);

  printf("Az utolso elem (hex): %X\n", tomb[99]);

  return 0;
}
