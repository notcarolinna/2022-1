#include <stdio.h>
#define SIZE 15

int main() {

  int vet[SIZE];
  int i, j, aux, troca;

  printf("Digite 15 números: \n");
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vet[i]);
  }

  // Elementos repetidos
  for (i = 0; i < SIZE; i++) {
    aux = 0;
    for (j = i + 1; j < SIZE; j++) {
      if (vet[i] == vet[j]) {
        aux = 1;
        printf("Valor repetido: %d\n", vet[i]);
      }
    }
    if (aux == 1) {
      printf("Valor repetido, digite outro: ");
      scanf("%d", &vet[i]);
    }
  }
  // lendo o vetor
  printf("\n\nVetor: { ");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", vet[i]);
  }
  printf("}");
  // ordenando o vetor
  for (i = 0; i < SIZE; i++) {
    for (j = i + 1; j < SIZE; j++) {
      if (vet[i] > vet[j]) {
        troca = vet[i];
        vet[i] = vet[j];
        vet[j] = troca;
      }
    }
  }
  // lendo o vetor ordenado
  printf("\nVetor: ordenado{ ");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", vet[i]);
  }
  printf("}");
}

/*
Escreva um algoritmo que faz a leitura de 15 números inteiros e coloca-os em um
vetor, mas impedindo que valores repetidos entrem no vetor. Seu programa deve
terminar apenas quando o vetor estiver cheio
*/
