#include "digito.h"

int k_esimo_digito_recursivo(int n, int k) {

    if (k == 1) {
        return n % 10;
    }

    return k_esimo_digito_recursivo(n / 10, k - 1);
}

int k_esimo_digito(int n, int k) {

    if (k <= 0 || k > (int)log10(n) + 1) {
        return -1;
    }
    return k_esimo_digito_recursivo(n, k);
}
