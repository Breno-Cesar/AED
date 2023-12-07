#include "lista_alunos.h"
#include <stdio.h>

int main() {
    ListaAlunos lista;
    inicializarLista(&lista);

    Aluno aluno;
    int codigo;

    // Adicionar aluno 1
    printf("Digite o c�digo do aluno 1: ");
    scanf("%d", &codigo);
    aluno.codigo = codigo;

    printf("Digite o nome do aluno 1: ");
    scanf("%s", aluno.nome);

    printf("Digite a idade do aluno 1: ");
    scanf("%d", &aluno.idade);

    printf("Digite o n�mero de filhos do aluno 1: ");
    scanf("%d", &aluno.num_filhos);

    adicionarAluno(&lista, aluno);

    // Adicionar aluno 2
    printf("Digite o c�digo do aluno 2: ");
    scanf("%d", &codigo);
    aluno.codigo = codigo;

    printf("Digite o nome do aluno 2: ");
    scanf("%s", aluno.nome);

    printf("Digite a idade do aluno 2: ");
    scanf("%d", &aluno.idade);

    printf("Digite o n�mero de filhos do aluno 2: ");
    scanf("%d", &aluno.num_filhos);

    adicionarAluno(&lista, aluno);

    // Verificar duplica��o
    printf("Verificando duplica��o para o aluno 1:\n");
    if (!alunoDuplicado(&lista, lista.alunos[0])) {
        printf("Adicionando aluno 1 novamente � lista.\n");
        adicionarAluno(&lista, lista.alunos[0]);
    }

    // Imprimir lista
    imprimirLista(&lista);

    return 0;
}
