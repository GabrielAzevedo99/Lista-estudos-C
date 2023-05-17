#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int x[TAM];
    int i;

    srand(time(NULL));

    // 1 - Gerar 10 números aleatórios para o array
    for (i = 0; i < TAM; i++) {
        x[i] = rand() % 100;
    }

    // 2 - Mostrar o array na sequência adquirida/gerada
    printf("ordenacao de numeros conforme gerados\n");
    for (i = 0; i < TAM; i++) {
        printf("%d\n", x[i]);
    }
    
    // 3 - Ordenar o array em ordem crescente

    int j;
    
    printf("ordenacao de numeros em ordem crescente\n");
    for (i = 0; i < TAM - 1; i++) { 
        for (j = i + 1; j < TAM; j++) {
            if (x[i] > x[j]) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    // 4 - Mostrar o array ordenado na tela
    for (i = 0; i < TAM; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}

