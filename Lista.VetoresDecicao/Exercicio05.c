/*5.Ler 2 valores fracion�rios e perguntar qual opera��o aritm�tica o usu�rio quer fazer com eles.
Usar switch..case. Informar o resultado da opera��o. */

#include <stdio.h>

int main() {
    double n1, n2;
    char opera;

    printf("Digite um valor: ");
    scanf("%lf", &n1);

    printf("Digite outro valor: ");
    scanf("%lf", &n2);

    printf("Digite a operacao aritmetica: ");
    scanf(" %c", &opera);

    switch (opera) {
        case '+':
            printf("%.2lf\n", n1 + n2);
            break;
        case '-':
            printf("%.2lf\n", n1 - n2);
            break;
        case '/':
            printf("%.2lf\n", n1 / n2);
            break;
        case '*':
            printf("%.2lf\n", n1 * n2);
            break;
        default:
            printf("Desconhecido\n");
            break;
    }

    return 0;
}
