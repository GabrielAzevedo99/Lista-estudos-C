/*4.Escrever se um ano informado pelo usu�rio � bissexto ou n�o.
Um ano � bissexto quando � (divis�vel por 400) ou� (divis�vel por 4 en�o por 100); */

#include <stdio.h>

int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("O ano e Bisiesto");
    } else {
        printf("O ano NAO e Bisiesto");
    }
    
    return 0;
}
