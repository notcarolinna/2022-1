#include <stdio.h>

int div, soma;

int retornadiv(int n) { // função que executa caso seja par
  div = n / 2;
  return div;
}

int retornasoma(int n) { // função que executa caso for ímpar
  soma = 3 * n + 1;
  return soma;
}

int conta(int n) { // função que executa as outras duas funções

  if (n % 2 == 0) {
    printf("Par! Valor: %d", retornadiv(n));
  } else {
    printf("Ímpar! Valor: %d", retornasoma(n));
  }

  return n;
}

int main() {
  
  int n;
  printf("Digite um valor para n: ");
  scanf("%d", &n);
  printf("\n");
  printf("\nValor Digitado: %d", conta(n)); // puxa a função que passa o resultado
  
}

/*
Escreva uma função que recebe um inteiro n e retorna n/2.
Depois escreva uma função que recebe um inteiro n e retorna 3n + 1.
Escreva uma nova função que usa as funções que você já tem. A nova função recebe
um número n e se ele for ímpar retorna 3n + 1, se for par retorna n/2.
*/
