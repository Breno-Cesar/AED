#include "lista_alunos.h"
#include <stdio.h>

void inicializarLista(ListaAlunos *lista) {
    lista->tamanho = 0;
}

void adicionarAluno(ListaAlunos *lista, Aluno aluno) {
    if (lista->tamanho < MAX_ALUNOS) {
        lista->alunos[lista->tamanho++] = aluno;
        printf("Aluno adicionado com sucesso.\n");
    } else {
        printf("A lista de alunos está cheia. Não é possível adicionar mais alunos.\n");
    }
}

int alunoDuplicado(ListaAlunos *lista, Aluno aluno) {
    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->alunos[i].codigo == aluno.codigo) {
            printf("Aluno duplicado encontrado.\n");
            return 1; // Duplicado
        }
    }
    printf("Aluno não duplicado.\n");
    return 0; // Não duplicado
}

void imprimirLista(ListaAlunos *lista) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < lista->tamanho; i++) {
        printf("Código: %d, Nome: %s, Idade: %d, Número de Filhos: %d\n",
               lista->alunos[i].codigo, lista->alunos[i].nome,
               lista->alunos[i].idade, lista->alunos[i].num_filhos);
    }
}

