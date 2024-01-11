#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"

Paciente* criarPaciente(int codigo, char *nome, int idade)
{
    Paciente* paciente = (Paciente*)malloc(sizeof(Paciente));
    if(paciente !=NULL){
        paciente->codigo = codigo;
        strncpy(paciente->nome, nome, sizeof(paciente->nome)-1);
        paciente->idade = idade;
    }
    return paciente;
}

void liberarPaciente(Paciente *paciente){
    free(paciente);
}

void exibirPaciente(Paciente *paciente){
    printf("Codigo: %d, Nome: %s, Idade: %d\n", paciente->codigo, paciente->nome, paciente->idade);
}
