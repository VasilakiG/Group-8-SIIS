#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int main() {

  writeToFile();
  FILE *dat = fopen("text.txt", "r");
  char c, pret;
  int par = 0, prv = 1;
  while((c = fgetc(dat)) != EOF)
  {
      if(prv)
      {
          pret = c;
          prv = 0;
      }
      c = tolower(c);
      if(pret == 'a' || pret == 'i' || pret == 'e' || pret == 'o' || pret == 'u')
      {
          char temp;
          if(c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u')
          {
              printf("%c%c\n", pret, c);
              par++;
          }
      }
      pret = c;
  }
  printf("%d", par);

  return 0;
}
