#include <stdio.h>

/*2.Calcular a multa: Leia a velocidade de um carro e a velocidade máxima para a rua:

1.Informe 50 reais se estiver até 10km/h acima;
2.Informe 100 reais se estiver entre 11km/h e 30km/h acima;
3.Informe 300 reais se estiver acima de 31km/h acima; */

int main() {
    int velo, max, acima;
    printf("Digite a sua velocidade: ");
    scanf("%d", &velo);
    printf("Digite a velocidade maxima da rua: ");
    scanf("%d", &max);
    acima = max - velo;
    if(acima == 1 && acima <= 10){ 
        printf("Multa de 50 Reais");
    }
    if(acima >= 11 && acima < 31){ 
        printf("Multa de 100 Reais");
    }
    if(acima >= 31){ 
        printf("Multa de 300 Reais");
    }
    return 0;
}
