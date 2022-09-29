#include <stdio.h>
#include <string.h>

int main() {

  char vet[100];
  int n[100];
  int q;
  int v = 0;

  printf("Insira uma molécula para simplificá-la:\n");

  fgets(vet, 100, stdin); //nome vetor, tamanho vetor, stdin

  q = strlen(vet) - 2; 

  while (v <= q) {
    n[v] = vet[v];
    v++;
  }

  v = 0;
  while (v <= q) {
    if (n[v] == (n[v + 1] + 32) || (n[v] + 32) == n[v + 1])
    v++;
    else
      printf("%c", vet[v]);

    v++;
  }
 
}
