#include <stdio.h>

int main() {

  // Escreva um algoritmo que recebe um ano maior do que zero e diz a que século
  // ele percence. Os anos de 1 a 100 são do século I, os anos de 101 a 200 são
  // do século II.

  int ano;
  printf("Digite um ano:\n");
  scanf("%d", &ano);

  int divisao = ano / 100; // vai dar o resultado da divisão
  int resto = divisao % 100; // será utilizado se o ano terminar em 00
  int soma = resto + 1; // será utilizado se o ano terminar em 01

  if (ano % 100 == 0) { 
    printf("O ano pertence ao século %d\n", resto);
  } else {
    printf("O ano pertence ao século %d!\n", soma);
  }
}

