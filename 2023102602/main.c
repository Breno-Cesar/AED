#include <stdio.h>
#include "pessoa.h"

int main() {
    Pessoa *ponteiroPessoa = criarPessoa();

    if (ponteiroPessoa == NULL) {
        printf("Erro ao alocar memória para a estrutura Pessoa.\n");
        return 1;
    }

    preencherDadosPessoa(ponteiroPessoa);
    imprimirDadosPessoa(ponteiroPessoa);

    liberarPessoa(ponteiroPessoa);

    return 0;
}
