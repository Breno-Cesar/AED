#ifndef DATA_H
#define DATA_H

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

Data* criarData();
void preencherData(Data *data);
void imprimirData(Data *data);
void liberarData(Data *data);

#endif

