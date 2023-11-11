#include <stdio.h>
#include <stdlib.h>
#include "turma.h"

TURMA criarTurma(int quantidade) {
    TURMA novaTurma;
    novaTurma.alunos = (ALUNO *)malloc(quantidade * sizeof(ALUNO));
    novaTurma.quantidadeAlunos = quantidade;
    return novaTurma;
}

void inserirAluno(TURMA *turma, ALUNO aluno) {
    for (int i = 0; i < turma->quantidadeAlunos; i++) {
        if (turma->alunos[i].codigo == 0) {
            turma->alunos[i] = aluno;
            return;
        }
    }
    printf("A turma está cheia. Não é possível adicionar mais alunos.\n");
}

void liberarTurma(TURMA *turma) {
    free(turma->alunos);
    turma->alunos = NULL;
    turma->quantidadeAlunos = 0;
}

void buscarAlunoPorCodigo(TURMA turma, int codigo) {
    for (int i = 0; i < turma.quantidadeAlunos; i++) {
        if (turma.alunos[i].codigo == codigo) {
            printf("Dados do aluno:\n");
            printf("Código: %d\n", turma.alunos[i].codigo);
            printf("Nome: %s\n", turma.alunos[i].nome);
            printf("Idade: %d\n", turma.alunos[i].idade);
            printf("Coeficiente: %.2f\n", turma.alunos[i].coeficiente);
            return;
        }
    }
    printf("Aluno com código %d não encontrado.\n", codigo);
}

void imprimirAlunos(TURMA turma) {
    printf("Código e Nome dos Alunos:\n");
    for (int i = 0; i < turma.quantidadeAlunos; i++) {
        if (turma.alunos[i].codigo != 0) {
            printf("Código: %d, Nome: %s\n", turma.alunos[i].codigo, turma.alunos[i].nome);
        }
    }
}


