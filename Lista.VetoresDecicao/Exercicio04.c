/*4.Escrever se um ano informado pelo usuário é bissexto ou não.
Um ano é bissexto quando é (divisível por 400) oué (divisível por 4 enão por 100); */

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
