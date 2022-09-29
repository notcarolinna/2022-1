#include <stdio.h>
#define SIZE 3
int main() {
    int vetorA[SIZE];
    int vetorB[SIZE];
    int vetorC[SIZE];
    int j = 0;
    int k = 0;
    
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &vetorA[i]);
        
        if (vetorA[i] % 2 == 0) {
            vetorB[j] = vetorA[i];
            j++;
        } else {
            vetorC[k] = vetorA[i];
            k++;
        }
    }
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetorA[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < j; i++) {
        printf("%d ", vetorB[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < k; i++) {
        printf("%d ", vetorC[i]);
    }
    
    return 0;
}
/*
Escreva um programa que recebe números inteiros e armazena-os no vetor A. Em seguida, distribua os elementos de A entre outros dois vetores, B e C, 
colocando os elementos pares em B e os ímpares em C. Depois imprima A, B e C e verifique que está tudo certo.
  */
