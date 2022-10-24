#include <stdio.h>
#define SIZE 1000

int palavras(char txt[]) {

  int i;
  int words = 0;

  for (i = 0; txt[i] != '\0' && txt[i] != '\n'; i++) {

    while (txt[i] == ' ') {
      i++;
    }
    if (txt[i] != '\0' && txt[i] != '\n') {
      words++;
      while (txt[i] != ' ' && txt[i] != '\0' && txt[i] != '\n') {
        i++;
      }
    }
  }
  return words;
}

int main() {
  char txt[SIZE];

  printf("Digite uma frase de até %d letras: \n", SIZE);
  fgets(txt, SIZE, stdin);

  palavras(txt);
}

/*
Suponha que você tem um vetor vet terminado com '\0'. Escreva uma função int
palavras(char vet[]) que recebe o texto e devolve o número de palavras que ele
tem. Lembre que uma palavra é uma seqquencia de letras e vários espaços em
branco juntos não formam várias palavras.
*/
