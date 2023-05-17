#include <stdio.h>

//1.Ler 3 números fracionários do teclado e informar se o primeiro é maior do que a soma dos dois últimos;


int main() {
    double n1, n2, n3;
    printf( "Digite o primeiro numero: ");
    scanf("%lf", &n1);
    printf( "Digite o segundo numero: ");
    scanf("%lf", &n2);
    printf( "Digite o terceiro numero: ");
    scanf("%lf", &n3);
    double soma = n2 + n3;
    if(n1 > soma){
        printf( "O n1 e maior que a soma de n2 e n3");
    }else{
        printf("n1 NAO e maior que a soma de n1 e n2");
    }
    return 0;
}


