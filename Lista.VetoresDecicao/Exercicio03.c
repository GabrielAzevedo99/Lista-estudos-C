#include <stdio.h>

//3.Ler 3 valores em qualquer ordem e escrever eles em ordem crescente;

int main() {
    int n1, n2, n3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    int valor[] = {n1, n2, n3};
    int tamanho = sizeof(valor) / sizeof(valor[0]);

    // Algoritmo de ordenação Bubble Sort
    int i = 0;
    int j = 0;
    
    for (i ; i < tamanho - 1; i++) {
        for (j; j < tamanho - i - 1; j++) {
            if (valor[j] > valor[j + 1]) {
                int temp = valor[j];
                valor[j] = valor[j + 1];
                valor[j + 1] = temp;
            }
        }
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", valor[0], valor[1], valor[2]);

    return 0;
}
