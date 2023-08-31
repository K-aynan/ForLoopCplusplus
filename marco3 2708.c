#include <stdio.h>

int main() {
    const int totalAlunos = 15;
    int cursoCount[4] = {0};
    int totalErradas = 0;

    int i;
    for (i = 0; i < totalAlunos; ++i) {
        int curso, resposta;

        printf("Aluno %d: Digite o número do curso (1-4): ", i+1);
        scanf("%d", &curso);

        if (curso < 1 || curso > 4) {
            printf("Curso inválido. Digite um número entre 1 e 4.\n");
            --i;
            continue;
        }

        printf("Resposta do aluno %d (0 para errada, 1 para certa): ", i+1);
        scanf("%d", &resposta);

        if (resposta == 0) {
            ++totalErradas;
        }

        ++cursoCount[curso - 1];
    }

    for (i = 0; i < 4; ++i) {
        printf("Total de alunos no curso %d: %d\n", i+1, cursoCount[i]);
    }

    printf("Total de respostas erradas: %d\n", totalErradas);

    return 0;
}

