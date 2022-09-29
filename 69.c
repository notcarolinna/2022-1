#include <stdio.h>
#include <string.h>

int MDC(int m, int n) {
  
  int mdc = 0;

  while (n != 0) {
    mdc = m;
    m = n;
    n = mdc % n;
  }

  return m;
}

int main() {

  int m, n;
  printf("Digite valores para m e n, respectivamente: ");
  scanf("%d%d", &m, &n);

  printf("MDC = %d", MDC(m, n));q

}
/*
Escreva uma função que recebe inteiros m e n e determina o maior divisor comum
de m e n. Sugestão: use o algoritmo de Euclides que está em 3.21 para isso.
*/
