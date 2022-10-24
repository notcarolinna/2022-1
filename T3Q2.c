#include <stdio.h>

int np(int n) {

  int num = 1;
  int i = 0;

  while (i != n) {
    int nTimesDivided = 0;
    for (int j = 1; j <= num; j++) {
      if (num % j == 0)
        nTimesDivided++;
    }

    if (nTimesDivided == 2) {
      num++; // se ele for primo, vai pra próxima posição, pois quer o número não primo.
    } else if (i == n - 1) { // i = antececssor do número desejado 
      i++;
    } else {
      num++;
      i++;
    }
  }
  return num;
}

int main() {

  int n;

  printf("Insira qual o número do número não primo que você deseja saber: ");
  scanf("%d", &n);
  printf("O %dº número não primo é: %d\n", n, np(n));
}

/*
Escreva uma função int naopriminho(int n) que devolve o n-ésimo número que não
é primo. Então, se n = 3, sua função deve retornar o terceiro inteiro que não
é primo, que é 6, e assim por diante.
*/
