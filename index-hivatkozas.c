#include <stdio.h>

void feltolt(int tomb[], int meret);
void feltolt2(int tomb2[], int meret);
void feltoltes3(int tomb3[]);

int main(void) {

  int tomb1[100];
  feltolt(tomb1, 100);
  printf("Az utolso elem: %d\n", tomb1[99]);

  int tomb2[100];
  feltolt2(tomb2, 100);
  printf("Az utolso elem (hex): %X\n", tomb2[99]);

  int tomb3[100];
  feltoltes3(tomb3);
  printf("Az utolso elem (hatvanyos): %d\n", tomb3[99]);

  return 0;
}

/*--------------------------------------------------*/

void feltolt(int tomb1[], int meret) {
  int i = 0;
  int szam = 1008;

  while (i < meret) {
    if ((szam & 4) == 0 && (szam & 8) == 0 && (szam & 32) != 0) {
      tomb1[i] = szam;
      i++;
    }
    szam++;
  }
}

/*--------------------------------------------------*/

void feltolt2(int tomb2[], int meret) {
  int szam = 1020;
  int i = 0;

  while (i < meret) {
    int osztható = (szam % 3 == 0);

    int tizes = (szam / 10) % 10;
    int van_kettes = (tizes == 2);

    if (osztható && van_kettes) {
      tomb2[i] = szam;
      i++;
    }

    szam++;
  }
}

/*--------------------------------------------------*/

void feltoltes3(int tomb3[]) {
  int n = 1;
  int i = 0;
  int csillag;

  while (i < 100) {
    csillag = 6 * n * n - 6 * n + 1;

    if (csillag >= 793) {
      tomb3[i] = csillag;
      i++;
    }

    n++;
  }
}