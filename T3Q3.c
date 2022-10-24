#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void swap(int vetor[], int p1, int p2) {

  int i, j, aux, auxp1;

  for (i = 0; i < SIZE; i++) {
    auxp1 = vetor[p1];
  }


  for (i = p1; i < p2; i++) {
    aux = vetor[i];
    vetor[i] = vetor[i + 1];
    vetor[i + 1] = aux;
  }

  vetor[p2] = auxp1;


  printf("\nVetor modificado: \n{ ");
  for (i = p1; i <= p2; i++) {
    printf("%d ", vetor[i]);
  }
  printf("}");
}

int main() {

  int vetor[SIZE];
  int p1, p2;
  int i, j, aux, auxp1;

  printf("Digite os valores de p1 e p2: ");
  scanf("%d%d", &p1, &p2);
  printf("\nDigite %d valores para o vetor: \n", SIZE);
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vetor[i]);
  }
  swap(vetor, p1, p2);
}

/*
Suponha que você tenha um vetor de inteiros vet de 100 posições e cada uma delas
contém um número qualquer. Escreva a função void rola(int vetor[], int p1, int
p2), que move os elementos do vetor: todos os elementos das posições p1 + 1 até
p2 são movidas para a posição anterior e o elemento que estava na posição p1
vai para a posição p2 do vetor. Então, se esse trecho tem "1 2 3 4", ele agora
fica com "2 3 4 1".
*/
