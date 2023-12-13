#ifndef LISTA_H
#define LISTA_H

#define TAMANHO_MAX 100

typedef struct {
    int elementos[TAMANHO_MAX];
    int tamanho;
} Lista;

void inicializarLista(Lista* lista);
void percorrerConstruirL1a(Lista* lista, Lista* l1a);
void percorrerConstruirL1b(Lista* lista, Lista* l1b);

#endif // LISTA_H

