#include <stdio.h>

int main() {
    const int totalNumeros = 10;
    int menorNumero;

	int i;
    for (i = 0; i < totalNumeros; ++i) {
        int numero;

        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numero);

        if (numero < menorNumero) {
            menorNumero = numero;
        }
    }

    printf("O maior numero é: %d\n", menorNumero);

    return 0;
}

