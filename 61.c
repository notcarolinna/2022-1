#include <stdio.h>

int conta(int n) {
  while (n > 1) {
    if (n % 2 == 0) {
      n = n / 2;
      printf("Valor: %d (Par)\n", n);
    } else {
      n = 3 * n + 1;
      printf("Valor: %d(ímpar)\n", n);
    }
  }
  return n;
}

int main() {

  
  int n;
  printf("Digite um valor para n: ");
  scanf("%d", &n);
  printf("\n");
  printf("\n%d", conta(n));
}

/*
 Escreva um programa que recebe um inteiro e usa a função do exercício anterior
 repetidas vezes até que o resultado seja 1, imprimindo os números que vão sendo
 obtidos
*/
