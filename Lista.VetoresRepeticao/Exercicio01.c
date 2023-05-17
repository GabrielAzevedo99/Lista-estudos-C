//1.Informar todos os números de 1000 a 1999 que quando divididos por 11 obtemos resto = 5.

#include <stdio.h>

int main() {
    int i;

    for (i = 1000; i <= 1999; i++) {
        printf("%d\n", i);
        if (i % 11 == 5) {
            printf("%d dividido por 11 tem resto 5\n", i);
        }
    }

    return 0;
}

