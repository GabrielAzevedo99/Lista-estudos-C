/*2.Colocar estas duas linhas iniciais no método Main():
Randomrnd= newRandom(); // Inicia Aleatório 
int x = rnd.nextInt(100); //Gera um número aleatório (0 –99)
1.Faça um laço de repetição que solicite ao usuário digitar um número;
2.O laço encerra quando o usuário acertar o número;
3.Se o número do usuário for menor que o oculto, escrever: “MAIOR”,
se o número do usuário for maior que o oculto, escrever: “MENOR”. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa a semente aleatória
    int x = rand() % 100; // Gera um número aleatório entre 0 e 99

    int n = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n > x) {
            printf("numero maior\n");
        }
        if (n < x) {
            printf("numero menor\n");
        }

        if (n == x) {
            printf("VOCE ACERTOU\n");
            break;
        }
    } while (n != x);

    return 0;
}

