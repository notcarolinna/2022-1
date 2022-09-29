#include <stdio.h>
#define SIZE 5

int main() {

  int vet[SIZE], vetResult[SIZE];
  int i, j, aux = 1;

  printf("Digite 5 números: \n");
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vet[i]);
  }
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      if (vet[i] != vet[j]) {
        aux = aux * vet[j];
      }
    }
    vetResult[i] = aux;
    aux = 1; // reseta pra auxiliar não voltar a ser o valor do laço antigo
  }
  for (i = 0; i < SIZE; i++) {
    printf("%d ", vetResult[i]);
  }
}

/*
Escreva um programa que recebe um vetor (por exemplo [2, 3, 4, 7, 1]) e
substitui o elemento da posição i pelo produto de todos os outros elementos do
vetor. Para o exemplo, o resultado seria [84, 56, 42, 24, 168]
  */
