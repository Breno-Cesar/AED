#include <stdio.h>
#include "pessoa.h"

int main() {
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    preencherDados(&pessoa, "Marcos vinicius", "20/10/2003", "123.456.789-10");
    imprimirDados(&pessoa);
    free(pessoa);
    return 0;
}
