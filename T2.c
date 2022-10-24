#include <stdio.h>

int main() {

  int k; //nota da primeira candidata
  int candidata[10000];

  printf("Digite a nota da primeira candidata: \n");
  scanf("%d", &k);

  candidata[0] = k;

  for (int i = 0; i < 9999; i++) { // nota da próxima candidata
    candidata[i + 1] = ((candidata[i] * 87) % 601) + 400;
  }

  int n; // n é a variável para candidatas
  int tequilas = 0;
  int anterior = 1, proxima = 0; // candidata anterior e a próxima

  // Laço para rodar até a fórmula disser que a próxima candidata é ela mesma

  while (n != anterior) {
    anterior = n;

    if (candidata[n] % 2 == 0) { // se a nota for par: 2n+3
      proxima = 2 * candidata[n] + 3;
      candidata[n]++; 
      n = proxima;
      printf("candidata[%d]: %d\n", n, candidata[n]);
      
    } else {
      
      proxima = 3 * candidata[n] + 1; // se não for par: 3n+1
      candidata[n]++;
      n = proxima;
    //  printf("candidata[%d]: %d\n", n, candidata[n]);
    }

    tequilas++;
  }

  printf("Acabou! Harry casará com a candidata na posição %d da mesa, depois de tomar %d tequilas!",
         n, tequilas);

  return 0;
}

#include <stdio.h>

int main() {

  int k; //nota da primeira candidata
  int candidata[10000];

  printf("Digite a nota da primeira candidata: \n");
  scanf("%d", &k);

  candidata[0] = k;

  for (int i = 0; i < 9999; i++) { // nota da próxima candidata
    candidata[i + 1] = ((candidata[i] * 87) % 601) + 400;
  }

  int n; // n é a variável para candidatas
  int tequilas = 0;
  int anterior = 1, proxima = 0; // candidata anterior e a próxima

  // Laço para rodar até a fórmula disser que a próxima candidata é ela mesma

  while (n != anterior) {
    anterior = n;

    if (candidata[n] % 2 == 0) { // se a nota for par: 2n+3
      proxima = 2 * candidata[n] + 3;
      candidata[n]++; 
      n = proxima;
      printf("candidata[%d]: %d\n", n, candidata[n]);
      
    } else {
      
      proxima = 3 * candidata[n] + 1; // se não for par: 3n+1
      candidata[n]++;
      n = proxima;
    //  printf("candidata[%d]: %d\n", n, candidata[n]);
    }

    tequilas++;
  }

  printf("Acabou! Harry casará com a candidata na posição %d da mesa, depois de tomar %d tequilas!",
         n, tequilas);

  return 0;
}

