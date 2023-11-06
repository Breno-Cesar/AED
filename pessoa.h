#ifndef PESSOA_H
#define PESSOA_H

typedef struct {
    char nome[50];
    char dataNascimento[11];
    char cpf[12];
} Pessoa;

Pessoa* criarPessoa();
void preencherDados(Pessoa *pessoa);
void imprimirDados(Pessoa *pessoa);
void liberarPessoa(Pessoa *pessoa);

#endif // PESSOA_H
