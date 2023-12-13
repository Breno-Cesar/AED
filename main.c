#include "alunos.h"

int main() {
    ListaAlunos lista;
    inicializarLista(&lista);

    // Solicitar informa��es do usu�rio
    Aluno aluno;
    printf("Informe a matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Informe o nome do aluno: ");
    scanf("%s", aluno.nome);  // Usando %s para capturar uma string

    printf("Informe a idade do aluno: ");
    scanf("%d", &aluno.idade);

    // Inserir aluno na lista
    inserirElemento(&lista, aluno);

    // Exibir lista de alunos
    printf("\nLista de Alunos:\n");
    exibirLista(&lista);

    // Exibir quantidade de elementos
    printf("\nQuantidade de Elementos: %d\n", tamanhoLista(&lista));

    // Remover aluno com base na matr�cula
    int matriculaRemover;
    printf("\nInforme a matricula do aluno a ser removido: ");
    scanf("%d", &matriculaRemover);
    excluirElemento(&lista, matriculaRemover);

    // Exibir lista ap�s remo��o
    printf("\nLista de Alunos apos remo��o:\n");
    exibirLista(&lista);

    // Reiniciar lista
    reiniciarLista(&lista);

    return 0;
}
