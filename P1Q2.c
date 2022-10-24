#include <stdio.h>
#define SIZE 3

int main() {

  int vet[SIZE], vetPar[SIZE], vetImpar[SIZE];
  int i, pares = 0, impares = 0, soma = 0;

  printf("Digite 30 valores: ");
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vet[i]);
  }

  for (i = 0; i < SIZE; i++) {
    if (i == 0) {
      break;
      
    } else {
      if (i % 2 == 0) {
        vetPar[pares] = i;
        pares ++;
      }
        
      else {
        vetImpar[impares] = i;
        impares++;
      }
    }
  }
  
  printf("Vetor: ");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", vetPar[pares]);
  }
}
/*
  Escreva um programa que recebe 30 inteiros fornecidos pelo usuário e depois
  informa a média dos valores ímpares e a média dos valores pares
*/
