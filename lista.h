#ifndef LISTA_H
#define LISTA_H

typedef struct Node {
    int elemento;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
} Lista;

void inicializarLista(Lista* lista);
void inserirElemento(Lista* lista, int elemento);
void exibirLista(Lista* lista);
void copiarLista(Lista* l1, Lista* l2);
void concatenarListas(Lista* l1, Lista* l2);
void intercalarListas(Lista* l1, Lista* l2);

#endif // LISTA_H

