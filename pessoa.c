#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

Pessoa* criarPessoa() {
    Pessoa *novaPessoa = (Pessoa *)malloc(sizeof(Pessoa));
    return novaPessoa;
}

void preencherDados(Pessoa *pessoa) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa->nome);

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf(" %s", pessoa->dataNascimento);

    printf("Digite o CPF (xxx.xxx.xxx-xx): ");
    scanf(" %s", pessoa->cpf);
}

void imprimirDados(Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: %s\n", pessoa->dataNascimento);
    printf("CPF: %s\n", pessoa->cpf);
}

void liberarPessoa(Pessoa *pessoa) {
    free(pessoa);
}

