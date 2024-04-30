#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  char frase[255];
  int x = 0, tam;
  printf("Escreva uma string: ");
  gets(frase);
  tam = strlen(frase);
  printf("String invertida: \n");
  for(x = tam - 1; x >= 0; x--){
    printf("%c", frase[x]);
  }
}