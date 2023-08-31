#include <stdio.h>

int main() {
    const int totalNumeros = 10;
    int maiorNumero = 0;

	int i;
    for (i = 0; i < totalNumeros; ++i) {
        int numero;

        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numero);

        if (numero > maiorNumero) {
            maiorNumero = numero;
        }
    }

    printf("O maior numero é: %d\n", maiorNumero);

    return 0;
}

