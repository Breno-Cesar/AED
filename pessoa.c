#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

Pessoa* criarPessoa() {
    Pessoa *novaPessoa = (Pessoa *)malloc(sizeof(Pessoa));
    novaPessoa->dataNascimento = criarData();
    return novaPessoa;
}

void preencherDadosPessoa(Pessoa *pessoa) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa->nome);

    preencherData(pessoa->dataNascimento);

    printf("Digite o CPF (xxx.xxx.xxx-xx): ");
    scanf(" %s", pessoa->cpf);
}

void imprimirDadosPessoa(Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: ");
    imprimirData(pessoa->dataNascimento);
    printf("CPF: %s\n", pessoa->cpf);
}

void liberarPessoa(Pessoa *pessoa) {
    liberarData(pessoa->dataNascimento);
    free(pessoa);
}

