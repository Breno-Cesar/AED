#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
    double real;
    double imaginaria;
} Complexo;

Complexo* criarComplexo(double real, double imaginaria);
void destruirComplexo(Complexo *z);
Complexo* somaComplexos(Complexo *z1, Complexo *z2);
Complexo* subtrairComplexos(Complexo *z1, Complexo *z2);
Complexo* multiplicarComplexos(Complexo *z1, Complexo *z2);
Complexo* dividirComplexos(Complexo *z1, Complexo *z2);

#endif

