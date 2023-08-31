#include <stdio.h>

int main() {
    const int totalNumeros = 10;
    int dentroIntervalo = 0;
    int foraIntervalo = 0;

	int i;
    for ( i = 0; i < totalNumeros; ++i) {
        int numero;

        printf("Digite o numero %i: ", i+1);
        scanf("%i", &numero);

        if (numero >= 10 && numero <= 20) {
            ++dentroIntervalo;
        } else {
            ++foraIntervalo;
        }
    }

    printf("Total de numeros dentro do intervalo [10, 20]: %i\n", dentroIntervalo);
    printf("Total de numeros fora do intervalo: %i\n", foraIntervalo);

    return 0;
}

