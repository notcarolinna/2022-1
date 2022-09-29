// Crie uma struct chamada fraction que representa uma fração. Você pode
// escolher entre duas alternativas: (a) Apenas com numerador e denominador. (b)
// Com numerador, denominador e sinal da fração
#include <stdio.h>

struct fraction {
  int numerador, denominador;
};

void scan(struct fraction *d) {

  printf("Insira um numerador:\n");
  scanf("%d", &d->numerador);
  printf("Insira um denominador:\n");
  scanf("%d", &d->denominador);
}
void print(struct fraction d) { printf("%d/%d\n", d.numerador, d.denominador); }

struct fraction mult(struct fraction a, struct fraction b) {
  struct fraction resultado;
  resultado.numerador = a.numerador * b.numerador;
  resultado.denominador = a.denominador * b.denominador;

  return (resultado);
}

struct fraction reduce(struct fraction a) {
  struct fraction resultado;
  int v = 2;
  int min;
  int reduziu = 1;
  if (a.numerador < a.denominador) {
    min = a.numerador;
  } else {
    min = a.denominador;
  }
  // printf("%d\n", min);
  while (v <= min) {
    while (reduziu != 0) {
      //   printf("Entrei1\n");
      // printf("%d\n",a.numerador%v);
      // printf("%d\n",a.numerador%v);
      reduziu = 0;
      if (a.numerador % v == 0 && a.denominador % v == 0) {
        //  printf("Entrei2\n");
        a.numerador = a.numerador / v;
        a.denominador = a.denominador / v;
        reduziu++;
        //  printf("Reduziu\n");
      }
    }
    v++;
    reduziu++;
    //  printf("Aumentou\n");
    // printf("%d\n", v);
  }
  resultado.numerador = a.numerador;
  resultado.denominador = a.denominador;
  return resultado;
}

struct fraction add(struct fraction a, struct fraction b) {
  int mmc = 0;
  int divisora = 1;
  int divisorb = 1;
  int dividiu;
  int maior;
  int v = 2;
  int salvadenominadora = a.denominador;
  int salvanumeradora = a.numerador;
  int salvadenominadorb = b.denominador;
  int salvanumeradorb = b.numerador;

  if (a.denominador > b.denominador) {
    maior = a.denominador;
  } else {
    maior = b.denominador;
  }

  while (v <= maior) {
    while (dividiu != 0) {
      dividiu = 0;
      if (a.denominador % v == 0 && b.denominador % v == 0) {
        a.denominador = a.denominador / v;
        divisora = divisora * v;
        b.denominador = b.denominador / v;
        dividiu++;
        //printf("Entrei ab\n");
      } else {
        if (a.denominador % v == 0) {
          a.denominador = a.denominador / v;
          divisora = divisora * v;
          dividiu++;
         // printf("Entrei a\n");
        }
        if (b.denominador % v == 0) {
          b.denominador = b.denominador / v;
          divisorb = divisorb * v;
          dividiu++;
         // printf("Entrei b\n");
        }
      }
    }
    dividiu = 1;
    v++;
    //  printf("%d\n",v);
  }
  //printf("%d\n", divisora);
  //printf("%d\n", divisorb);
  mmc = divisora * divisorb;
 // printf("%d\n", mmc);
  struct fraction resultado;
  
  resultado.denominador = mmc;
  resultado.numerador = (((mmc / salvadenominadora) * salvanumeradora) +
                         ((mmc / salvadenominadorb) * salvanumeradorb));

  return resultado;
}


int main(void) {
  struct fraction a, b;

  scan(&a);
  scan(&b);

  printf("\n");
  printf("1:\n");
  printf("\n");

  printf("Primeira:\n");
  print(a);
  printf("Segunda:\n");
  print(b);

  printf("\n");
  printf("2: Fracoes multiplicadas:\n");
  printf("\n");

  struct fraction r = mult(a, b);

  print(r);

  printf("\n");
  printf("3: Soma de fracoes\n");
  printf("\n");

  struct fraction s = add(a, b);

  print(s);

  printf("\n");
  printf("4: Primeira fracao simplificada\n");
  printf("\n");

  // float comvirgula;
  struct fraction r1 = reduce(a);
  // struct fraction r2 = comvirgula(reduce);
  print(r1);
}
