#ifndef TURMA_H
#define TURMA_H

#include "aluno.h"

typedef struct {
    ALUNO *alunos;
    int quantidadeAlunos;
} TURMA;

TURMA criarTurma(int quantidade);
void inserirAluno(TURMA *turma, ALUNO aluno);
void liberarTurma(TURMA *turma);
void buscarAlunoPorCodigo(TURMA turma, int codigo);
void imprimirAlunos(TURMA turma);

#endif

