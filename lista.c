#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarLista(Lista* lista) {
    lista->head = NULL;
}

void inserirElemento(Lista* lista, int elemento) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->elemento = elemento;
    new_node->next = lista->head;
    lista->head = new_node;
}

void exibirLista(Lista* lista) {
    Node* current = lista->head;

    while (current != NULL) {
        printf("%d ", current->elemento);
        current = current->next;
    }
    printf("\n");
}

void copiarLista(Lista* l1, Lista* l2) {
    l2->head = NULL;

    Node* current_l1 = l1->head;

    while (current_l1 != NULL) {
        inserirElemento(l2, current_l1->elemento);
        current_l1 = current_l1->next;
    }
}

void concatenarListas(Lista* l1, Lista* l2) {
    if (l1->head == NULL) {
        l1->head = l2->head;
    } else {
        Node* current_l1 = l1->head;

        while (current_l1->next != NULL) {
            current_l1 = current_l1->next;
        }

        current_l1->next = l2->head;
    }

    l2->head = NULL;
}

void intercalarListas(Lista* l1, Lista* l2) {
    Lista result;
    inicializarLista(&result);

    Node* current_l1 = l1->head;
    Node* current_l2 = l2->head;

    while (current_l1 != NULL || current_l2 != NULL) {
        if (current_l1 != NULL) {
            inserirElemento(&result, current_l1->elemento);
            current_l1 = current_l1->next;
        }

        if (current_l2 != NULL) {
            inserirElemento(&result, current_l2->elemento);
            current_l2 = current_l2->next;
        }
    }

    l1->head = result.head;
    l2->head = NULL;
}

