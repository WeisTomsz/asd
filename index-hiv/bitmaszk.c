#include <stdio.h>

/*
 * Feltöltünk egy 100 elemű tömböt, ahol minden szám binárisban:
 *   - 2. bit = 0
 *   - 3. bit = 0
 *   - 5. bit = 1
 */

void feltolt(int tomb1[], int meret) {
  int i = 0;
  int szam = 1008;

  while (i < meret) {
    /*
     * Bitmaszkok:
     *   2. bit:  1 << 2 = 0b000100 = 4
     *   3. bit:  1 << 3 = 0b001000 = 8
     *   5. bit:  1 << 5 = 0b100000 = 32
     *
     * Feltétel:
     *   (szam & 4)  == 0  --> 2. bit nulla
     *   (szam & 8)  == 0  --> 3. bit nulla
     *   (szam & 32) != 0  --> 5. bit egy
     */
    if ((szam & 4) == 0 && (szam & 8) == 0 && (szam & 32) != 0) {
      tomb1[i] = szam;
      i++;
    }
    szam++;
  }
}

int main(void) {
  int tomb[100];

  feltolt(tomb, 100);

  printf("Az utolso elem: %d\n", tomb[99]);

  return 0;
}
