#include "complexo.h"
#include <stdlib.h>

Complexo* criarComplexo(double real, double imaginaria) {
    Complexo *novoComplexo = (Complexo *)malloc(sizeof(Complexo));
    if (novoComplexo == NULL) {
        return NULL;
    }
    novoComplexo->real = real;
    novoComplexo->imaginaria = imaginaria;
    return novoComplexo;
}

void destruirComplexo(Complexo *z) {
    free(z);
}

Complexo* somaComplexos(Complexo *z1, Complexo *z2) {
    Complexo *resultado = criarComplexo(z1->real + z2->real, z1->imaginaria + z2->imaginaria);
    return resultado;
}

Complexo* subtrairComplexos(Complexo *z1, Complexo *z2) {
    Complexo *resultado = criarComplexo(z1->real - z2->real, z1->imaginaria - z2->imaginaria);
    return resultado;
}

Complexo* multiplicarComplexos(Complexo *z1, Complexo *z2) {
    Complexo *resultado = criarComplexo((z1->real * z2->real) - (z1->imaginaria * z2->imaginaria),
                                       (z1->real * z2->imaginaria) + (z1->imaginaria * z2->real));
    return resultado;
}

Complexo* dividirComplexos(Complexo *z1, Complexo *z2) {
    double denominador = (z2->real * z2->real) + (z2->imaginaria * z2->imaginaria);
    Complexo *resultado = criarComplexo(((z1->real * z2->real) + (z1->imaginaria * z2->imaginaria)) / denominador,
                                       ((z1->imaginaria * z2->real) - (z1->real * z2->imaginaria)) / denominador);
    return resultado;
}

