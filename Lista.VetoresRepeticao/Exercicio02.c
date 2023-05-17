/*2.Colocar estas duas linhas iniciais no m�todo Main():
Randomrnd= newRandom(); // Inicia Aleat�rio 
int x = rnd.nextInt(100); //Gera um n�mero aleat�rio (0 �99)
1.Fa�a um la�o de repeti��o que solicite ao usu�rio digitar um n�mero;
2.O la�o encerra quando o usu�rio acertar o n�mero;
3.Se o n�mero do usu�rio for menor que o oculto, escrever: �MAIOR�,
se o n�mero do usu�rio for maior que o oculto, escrever: �MENOR�. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa a semente aleat�ria
    int x = rand() % 100; // Gera um n�mero aleat�rio entre 0 e 99

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

