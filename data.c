#include <stdio.h>
#include <stdlib.h>
#include "data.h"

Data* criarData() {
    Data *novaData = (Data *)malloc(sizeof(Data));
    return novaData;
}

void preencherData(Data *data) {
    printf("Digite o dia: ");
    scanf("%d", &(data->dia));

    printf("Digite o mes: ");
    scanf("%d", &(data->mes));

    printf("Digite o ano: ");
    scanf("%d", &(data->ano));
}

void imprimirData(Data *data) {
    printf("Data: %02d/%02d/%04d\n", data->dia, data->mes, data->ano);
}

void liberarData(Data *data) {
    free(data);
}

