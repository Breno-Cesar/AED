
#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

#define MAX_ALUNOS 100

typedef struct {
    int elementos[MAX_ALUNOS];
    int quantidade;
} ListaAlunos;

void inicializarLista(ListaAlunos *lista);
void liberarLista(ListaAlunos *lista);
int quantidadeElementos(ListaAlunos *lista);
int listaCheia(ListaAlunos *lista);
int listaVazia(ListaAlunos *lista);
void exibirLista(ListaAlunos *lista);
void inserirElementoOrdenado(ListaAlunos *lista, int matricula);
void excluirElemento(ListaAlunos *lista, int matricula);
void alterarMatricula(ListaAlunos *lista, int matriculaAntiga, int matriculaNova);

#endif // LISTAALUNOS_H

