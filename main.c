#include <stdio.h>
#include <stdlib.h>
#include "turma.h"

#define MAX_NOME 50

int main() {
    int quantidadeAlunos;
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &quantidadeAlunos);

    TURMA minhaTurma = criarTurma(quantidadeAlunos);

    for (int i = 0; i < quantidadeAlunos; i++) {
        ALUNO novoAluno;

        printf("\nDigite os dados do Aluno %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &novoAluno.codigo);

        printf("Nome: ");
        // Lendo o nome usando fgets para lidar com espaços em branco
        getchar(); // Consumir o caractere de nova linha pendente
        fgets(novoAluno.nome, MAX_NOME, stdin);

        printf("Idade: ");
        scanf("%d", &novoAluno.idade);

        printf("Coeficiente: ");
        scanf("%f", &novoAluno.coeficiente);

        inserirAluno(&minhaTurma, novoAluno);
    }

    int codigoBusca;
    printf("\nDigite o código do aluno que deseja buscar: ");
    scanf("%d", &codigoBusca);
    buscarAlunoPorCodigo(minhaTurma, codigoBusca);

    printf("\nLista de Alunos na Turma:\n");
    imprimirAlunos(minhaTurma);

    liberarTurma(&minhaTurma);

    return 0;
}

