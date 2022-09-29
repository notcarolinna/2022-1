#include <stdio.h>
#define SIZE 8

int main() {
  
  int vet[SIZE], vetInvert[SIZE], vetPar[SIZE], vetImpar[SIZE];
  int posMaior = 0, posMenor = 0;
  int soma = 0, produto = 1, par = 0, impar = 0, aux = 0;
  int i, j;
  float media;
  
  // Colocando valores no vetor
  printf("Digite 8 valores: ");
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vet[i]);
  }
  
  printf("\n-----------------------------------------------------------");
  
  // Vetor crescente
  printf("\n\nVetor: \n{ ");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", vet[i]);
  }
  printf("}");
  
  // Vetor decrescente
  printf("\nVetor decrescente: \n{ ");
  for (i = SIZE - 1; i >= 0; i--) {
    printf("%d ", vet[i]);
  }
  printf("}");
  
  // Vetor ordenado
  for (i = 0; i < SIZE; i++) {
    for (j = i + 1; j < SIZE; j++) {
      if (vet[i] > vet[j]) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  printf("\nVetor ordenado: \n{ ");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", vet[i]);
  }
  printf("}");
  
  // Vetor ordenado decrescente
  for (i = SIZE - 1; i >= SIZE; i--) {
    for (j = i + 1; j < SIZE; j++) {
      if (vet[i] < vet[j]) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  printf("\nVetor ordenado decrescente: \n{ ");
  for (i = SIZE - 1; i >= 0; i--) {
    printf("%d ", vet[i]);
  }
  printf("}");
  
  // Maior
  int maior = vet[0];
  for (i = 1; i < SIZE; i++) {
    if (vet[i] > maior) {
      maior = vet[i];
      posMaior = i;
    }
  }
  printf("\n\nMaior valor: %d \nPosicao: %d", maior, posMaior + 1);
  
  // Menor
  int menor = vet[0];
  for (i = 1; i < SIZE; i++) {
    if (vet[i] < menor) {
      menor = vet[i];
      posMenor = i;
    }
  }
  printf("\n\nMenor valor: %d \nPosicao: %d", menor, posMenor + 1);
  
  // Média dos elementos do vetor
  for (i = 0; i < SIZE; i++) {
    soma = soma + vet[i];
  }
  media = soma / SIZE;
  printf("\n\nSoma dos elementos do vetor: %d", soma);
  printf("\nMédia do vetor: %.1f", media);
  
  // Elementos repetidos
  for (i = 0; i < SIZE; i++) {
    for (j = i + 1; j <= SIZE; j++) {
      if (vet[i] == vet[j]) {
        printf("\nValor repetido: %d\n", vet[i]);
      }
    }
  }
  
  // Pares e ímpares
  for (i = 0; i < SIZE; i++) {
    if (vet[i] % 2 == 0) {
      vetPar[par] = vet[i];
      par++;
    } else {
      vetImpar[impar] = vet[i];
      impar++;
    }
  }
  printf("\nValores pares: { ");
  for (i = 0; i < par; i++) {
    printf("%d ", vetPar[i]);
  }
  printf("}");
  printf("\nValores impares: { ");
  for (i = 0; i < impar; i++) {
    printf("%d ", vetImpar[i]);
  }
  printf("}");
}
