#include <stdio.h>

int main() {

  // Em um universo paralelo, o Deus supremo decide:
  // No dia 1, vou colocar um coelhinho no planeta Zorg, que está vazio
  // No dia 2, vou colocar mais um coelhinho no planeta Zorg
  // A partir do dia 3, vou colocar no planeta Zorg a quantidade de coelhinhos
  // que havia 2 dias antes. Escreva um programa que diz quantos coelhinhos
  // estão em Zorg no dia n

  int dia, dia1, dia2;
  int coelhinhos, cont;
  int aux1, aux2;
 
  aux1 = dia1, aux2 = dia2;
  dia1 = 100, dia2 = 101;
  cont = 1;
  
  printf("digite o dia:\n");
  scanf("%d", &dia);

  if (dia == 1) {
    printf("Há 100 coelhinhos em Zorg!\n");
  }
  if (dia == 2) {
    printf("Há 102 coelhinhos em Zorg!\n");
  }
  if (dia >= 3) {
    while (cont < dia) {
      coelhinhos = aux1 + aux2;
      aux1 = aux2;
      aux2 = coelhinhos;
      cont++;
    }
    printf("Há %d coelhinhos em Zorg!", aux1);
  }
  }
