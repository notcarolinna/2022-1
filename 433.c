// Verificar se algum número do vetor é a soma de outros dois elementos do vetor
#include <stdio.h>
#define SIZE 3

int main() {

  int i, j, k;
  int aux;
  int vet[SIZE];

  printf("Digite os elementos do vetor: ");
  for(i = 0; i < SIZE; i++){
  scanf("%d", &vet[i]);
    }
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      for (k = 0; k < SIZE; k++) {
      if(vet[j] + vet[k] == vet[i]){
          printf("%d + %d = %d", vet[j], vet[k], vet[i]);
        }
      }
    }
  }
}
