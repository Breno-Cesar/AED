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
        printf("A lista de alunos est� cheia. N�o � poss�vel adicionar mais alunos.\n");
    }
}

int alunoDuplicado(ListaAlunos *lista, Aluno aluno) {
    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->alunos[i].codigo == aluno.codigo) {
            printf("Aluno duplicado encontrado.\n");
            return 1; // Duplicado
        }
    }
    printf("Aluno n�o duplicado.\n");
    return 0; // N�o duplicado
}

void imprimirLista(ListaAlunos *lista) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < lista->tamanho; i++) {
        printf("C�digo: %d, Nome: %s, Idade: %d, N�mero de Filhos: %d\n",
               lista->alunos[i].codigo, lista->alunos[i].nome,
               lista->alunos[i].idade, lista->alunos[i].num_filhos);
    }
}

