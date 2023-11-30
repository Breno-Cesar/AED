
#include "listaAlunos.h"

int main() {
    ListaAlunos lista;
    inicializarLista(&lista);

    int opcao, matricula, matriculaAntiga, matriculaNova;

    do {
        printf("\n1. Inserir Matricula\n");
        printf("2. Excluir Matricula\n");
        printf("3. Alterar Matricula\n");
        printf("4. Exibir Lista\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a matricula a ser inserida: ");
                scanf("%d", &matricula);
                inserirElementoOrdenado(&lista, matricula);
                break;
            case 2:
                printf("Digite a matricula a ser excluida: ");
                scanf("%d", &matricula);
                excluirElemento(&lista, matricula);
                break;
            case 3:
                printf("Digite a matricula antiga: ");
                scanf("%d", &matriculaAntiga);
                printf("Digite a nova matricula: ");
                scanf("%d", &matriculaNova);
                alterarMatricula(&lista, matriculaAntiga, matriculaNova);
                break;
            case 4:
                exibirLista(&lista);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    liberarLista(&lista);

    return 0;
}
