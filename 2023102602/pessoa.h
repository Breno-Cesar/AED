#ifndef PESSOA_H
#define PESSOA_H

#include "data.h"

typedef struct {
    char nome[50];
    Data *dataNascimento;
    char cpf[12];
} Pessoa;

Pessoa* criarPessoa();
void preencherDadosPessoa(Pessoa *pessoa);
void imprimirDadosPessoa(Pessoa *pessoa);
void liberarPessoa(Pessoa *pessoa);

#endif
