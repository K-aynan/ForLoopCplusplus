#include <stdio.h>

int main() {
    const int numCedulas = 8;
    double totalDinheiro = 0.0;

    for (int i = 1; i <= numCedulas; ++i) {
        double valorCedula;

        printf("Digite o valor da c�dula %d: ", i);
        scanf("%lf", &valorCedula);

        totalDinheiro += valorCedula;
    }

    printf("O total em dinheiro na carteira �: %.2lf\n", totalDinheiro);

    return 0;
}

