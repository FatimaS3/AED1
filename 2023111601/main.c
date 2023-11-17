#include <stdio.h>
#include <math.h>

int k_esimo_digito(int n, int k) {
    if (k > 0 && k <= floor(log10(n) + 1)) {
        int divisor = pow(10, k - 1);
        int k_digito = (n / divisor) % 10;
        return k_digito;
    } else {
        return -1;
    }
}

int main() {
    int resultado = k_esimo_digito(2845, 3);
    printf("%d\n", resultado);

    return 0;
}
