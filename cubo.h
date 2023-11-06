#ifndef CUBO_H
#define CUBO_H
#include <stddef.h>

typedef struct {
    float lado;
} Cubo;

Cubo* criarCubo(float lado);
float obterLado(Cubo *cubo);
float calcularArea(Cubo *cubo);
float calcularVolume(Cubo *cubo);

#endif

