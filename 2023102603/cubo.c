#include "cubo.h"

Cubo* criarCubo(float lado) {
    Cubo *novoCubo = (Cubo *)malloc(sizeof(Cubo));
    if (novoCubo == NULL) {
        return NULL;
    }
    novoCubo->lado = lado;
    return novoCubo;
}

float obterLado(Cubo *cubo) {
    return cubo->lado;
}

float calcularArea(Cubo *cubo) {
    return 6 * cubo->lado * cubo->lado;
}

float calcularVolume(Cubo *cubo) {
    return cubo->lado * cubo->lado * cubo->lado;
}

