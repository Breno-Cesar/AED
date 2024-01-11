#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
int main()
{
    int nPacientes;
    int codigo, idade;
    char nome[50];
    printf("Escreva a quantidade de pacientes a serem adivcionados: ");
    scanf("%d", &nPacientes);

    Paciente* pacientes[nPacientes];

    for( int i= 0; i<nPacientes; ++i){
        printf("\n Informe os dados do paciente %d:\n", i+1);
        printf("Codigo: ");
        scanf("%d", &codigo);

        printf("Nome: ");
        scanf("%s", &nome);

        printf("Idade: ");
        scanf("%d", &idade);

        pacientes[i]=criarPaciente(codigo, nome, idade);
    }

    printf("\n Dados dos pacientes\n");
    for(int i=0;i<nPacientes;++i){
        exibirPaciente(pacientes[i]);
        liberarPaciente(pacientes[i]);
        }
        return 0;
}
