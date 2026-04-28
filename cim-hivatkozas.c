#include <stdio.h>

int szamlal(char *szoveg);
int legkisebb_paros(int *tomb2, int meret);

int main() {
  char szoveg[] = "A koronavirus megvaltoztatta az egyutteles szabalyait.";
  int eredmeny1 = szamlal(szoveg);
  printf("Az e es n betuk szama: %d\n", eredmeny1);

  int tomb2[] = {7,   10,  11,  100, 101, 200, 201,
                 300, 301, 400, 401, 402, 20,  21};
  int meret = sizeof(tomb2) / sizeof(tomb2[0]);
  int eredmeny2 = legkisebb_paros(tomb2, meret);

  printf("A legkisebb paros ertek: %d\n", eredmeny2);

  return 0;
}

int szamlal(char *szoveg) {
  int db = 0;
  int i = 0;
  while (*(szoveg + i) != '\0') {
    if (*(szoveg + i) == 'e' || *(szoveg + i) == 'n') {
      db++;
    }
    i++;
  }
  return db;
}

int legkisebb_paros(int *tomb2, int meret) {
  int i = 0;
  int min_paros = -1;

  while (i < meret) {
    if (*(tomb2 + i) % 2 == 0) {
      if (min_paros == -1 || *(tomb2 + i) < min_paros) {
        min_paros = *(tomb2 + i);
      }
    }
    i++;
  }

  return min_paros;
}