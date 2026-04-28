#include <stdio.h>

/* Az 'e' es 'n' betuk megszamlalasa a tombben */
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

int main() {
  char szoveg[] = "A koronavirus megvaltoztatta az egyutteles szabalyait.";
  int eredmeny = szamlal(szoveg);
  printf("%d\n", eredmeny);
  return 0;
}
