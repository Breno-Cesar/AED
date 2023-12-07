#ifndef LISTA_ALUNOS_H
#define LISTA_ALUNOS_H

#define MAX_ALUNOS 100

typedef struct {
    int codigo;
    char nome[50];
    int idade;
    int num_filhos;
} Aluno;

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int tamanho;
} ListaAlunos;

void inicializarLista(ListaAlunos *lista);
void adicionarAluno(ListaAlunos *lista, Aluno aluno);
int alunoDuplicado(ListaAlunos *lista, Aluno aluno);
void imprimirLista(ListaAlunos *lista);

#endif // LISTA_ALUNOS_H

