#ifndef ALUNOS_H
#define ALUNOS_H

typedef struct {
    int matricula;
    char nome[50];
    int idade;
} Aluno;

typedef struct Node {
    Aluno aluno;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    int count;
} ListaAlunos;

void inicializarLista(ListaAlunos* lista);
void reiniciarLista(ListaAlunos* lista);
int tamanhoLista(ListaAlunos* lista);
int listaCheia(ListaAlunos* lista);
int listaVazia(ListaAlunos* lista);
void exibirLista(ListaAlunos* lista);
void inserirElemento(ListaAlunos* lista, Aluno aluno);
void excluirElemento(ListaAlunos* lista, int matricula);

#endif // ALUNOS_H

