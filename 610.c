#include <stdio.h>

// escreva uma função que recebe um inteiro e retorna o número de divisores de n
// escreva uma função que verifica se n é primo e imprime uma mensagem dizendo
// se é ou não adaptar a função de verificação para encontrar o primeiro primo
// maior ou igual a n

int divisores(int n) {

  int divisores = 0;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      divisores++;
    }
  }
  printf("Número de divisores: %d\n", divisores);
}

int primo(int n) {

  int cont = 0;
  int i;

  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      cont++;
    }
    if (cont == 2) {
      printf("É primo\n");
      return 1; // primo
    } else {
      printf("Não é primo\n");
      return 0;
    }
  }
}

int main() {

  int n;
  int result = primo(n);

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  divisores(n);
  primo(n);
}
