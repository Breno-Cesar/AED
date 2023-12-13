#include "alunos.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarLista(ListaAlunos* lista) {
    lista->head = NULL;
    lista->count = 0;
}

void reiniciarLista(ListaAlunos* lista) {
    Node* current = lista->head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    lista->head = NULL;
    lista->count = 0;
}

int tamanhoLista(ListaAlunos* lista) {
    return lista->count;
}

int listaCheia(ListaAlunos* lista) {
    return 0;
}

int listaVazia(ListaAlunos* lista) {
    return lista->head == NULL;
}

void exibirLista(ListaAlunos* lista) {
    Node* current = lista->head;

    while (current != NULL) {
        printf("Matricula: %d, Nome: %s, Idade: %d\n", current->aluno.matricula, current->aluno.nome, current->aluno.idade);
        current = current->next;
    }
}

void inserirElemento(ListaAlunos* lista, Aluno aluno) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->aluno = aluno;
    new_node->next = NULL;

    Node* current = lista->head;
    Node* prev = NULL;

    while (current != NULL && aluno.matricula > current->aluno.matricula) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        new_node->next = lista->head;
        lista->head = new_node;
    } else {
        prev->next = new_node;
        new_node->next = current;
    }

    lista->count++;
}

void excluirElemento(ListaAlunos* lista, int matricula) {
    Node* current = lista->head;
    Node* prev = NULL;

    while (current != NULL && current->aluno.matricula != matricula) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        return;
    }

    if (prev == NULL) {
        lista->head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
    lista->count--;
}

