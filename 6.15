#include <stdio.h>

int checkPrimo(int numero) {
  int c = 0;

  for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) {
      c++;
    }
  }

  if (c == 2) {
    printf("%d é primo\n", numero);
  } else {
    printf("%d não é primo\n", numero);
  }

  //--------------------------------------------------------------------------//

  int numero2 = numero + 2;
  int d = 0;

  for (int i = 1; i <= numero2; i++) {
    if (numero2 % i == 0) {
      d++;
    }
  }

  if (d == 2) {
    printf("%d é primo\n", numero2);
  } else {
    printf("%d não é primo\n", numero2);
    return 0;
  }

  return 1;
}

int main() {
  int i, n;

  printf("Digite um número n:");
  scanf("%d", &n);
  int result = checkPrimo(n);

  if (result == 1) {
    printf("os valores %d e %d são primos gemeos\n", n, n + 2);
  } else {
    printf("não são primos gemeos\n");
  }

  return 0;
}
