#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct
{
    int codigo;
    char nome[50];
    int idade;
}Paciente;

Paciente* criarPaciente(int codigo, char *nome, int idade);
void liberarPaciente(Paciente *paciente);
void exibirPaciente(Paciente *paciente);

#endif
