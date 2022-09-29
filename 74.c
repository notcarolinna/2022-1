#include <stdio.h>

struct terreno {
  int comprimento, largura, pos;
};

void scan(struct terreno *d, int v) {
  printf("Insira o valor do comprimento do retangulo %d:\n", v + 1);
  scanf("%d", &d->comprimento);
  printf("Insira o valor da largura do retangulo %d:\n", v + 1);
  scanf("%d", &d->largura);
}
int quadrados(struct terreno d, int v) {
  int q = 0;
  if (d.comprimento == d.largura) {
    q = 1;
  }
  return q;
}

int maisparecido(struct terreno a[5]) {
  int pos = 0;
  int sub = 0;
  int f = 0;
  int v = 0;

  while (v <= 4) {
    if (a[v].comprimento != a[v].largura) {
      if (f == 0) {
        // printf("Entrei1\n");
        if (a[v].comprimento > a[v].largura) {
          sub = a[v].comprimento - a[v].largura;
          pos = v;
        } else {
          sub = a[v].largura - a[v].comprimento;
          pos = v;
        }
        //  printf("%d\n", v);
        // printf("%d\n", pos);
        f++;
      }
      if (f != 0) {
        // printf("Entrei2\n");
        if (a[v].comprimento > a[v].largura) {
          if (sub > a[v].comprimento - a[v].largura) {
            sub = a[v].comprimento - a[v].largura;
            pos = v;
          }
        } else {
          if (sub > a[v].largura - a[v].comprimento) {
            sub = a[v].largura - a[v].comprimento;
            pos = v;
          }
        }
        // printf("%d\n", v);
        // printf("%d\n", pos);
      }
    }
    v++;
  }
  // printf("%d\n", pos);
  return (pos);
}

int maior(struct terreno a[5]) {
  int v = 0, g = 0, f = 0, pos = 0;

  while (v <= 4) {
    if (f == 0) {
      g = a[v].largura + a[v].comprimento;
      f++;
      pos = v;
    } else {
      if (g < a[v].largura + a[v].comprimento) {
        g = a[v].largura + a[v].comprimento;
        pos = v;
      }
    }
    v++;
  }
  return (pos);
}

int menosparecido(struct terreno a[5]) {
  int pos = 0;
  int sub = 0;
  int f = 0;
  int v = 0;

  while (v <= 4) {
    if (a[v].comprimento != a[v].largura) {
      if (f == 0) {
        // printf("Entrei1\n");
        if (a[v].comprimento > a[v].largura) {
          sub = a[v].comprimento - a[v].largura;
          pos = v;
        } else {
          sub = a[v].largura - a[v].comprimento;
          pos = v;
        }
        //  printf("%d\n", v);
        // printf("%d\n", pos);
        f++;
      }
      if (f != 0) {
        // printf("Entrei2\n");
        if (a[v].comprimento > a[v].largura) {
          if (sub < a[v].comprimento - a[v].largura) {
            sub = a[v].comprimento - a[v].largura;
            pos = v;
          }
        } else {
          if (sub < a[v].largura - a[v].comprimento) {
            sub = a[v].largura - a[v].comprimento;
            pos = v;
          }
        }
        // printf("%d\n", v);
        // printf("%d\n", pos);
      }
    }
    v++;
  }
  // printf("%d\n", pos);
  return (pos);
}

int main(void) {
  struct terreno a[5];

  int v = 0;

  while (v <= 4) {
    scan(&a[v], v);
    v++;
  }
  v = 0;

  while (v <= 4) {
    if (quadrados(a[v], v) == 1) {
      printf("O retangulo %d é um quadrado com lados de %d\n", v + 1,
             a[v].largura);
    }
    v++;
  }
  v = 0;

  int parecido = maisparecido(&a[v]);

  printf(
      "O retangulo mais parecido com um quadrado é o %d com %d e %d de lados\n",
      parecido + 1, a[parecido].largura, a[parecido].comprimento);

  int maiorr = maior(&a[v]);

  printf("O retangulo com maior perimetro e o %d com %d e %d de lados\n",
         maiorr + 1, a[maiorr].largura, a[maiorr].comprimento);

  int menor = menosparecido(&a[v]);

  printf("O retangulo menos parecido com um quadrado é o %d com %d e %d de "
         "lados\n",
         menor + 1, a[menor].largura, a[menor].comprimento);
}
