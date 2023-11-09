#include <stdio.h>

int maior(int v[], int n) {
    int x;
    if (n == 1)
        return v[0];
    else {
        x = maior(v, n - 1);
        if (x > v[n - 1])
            return x;
        else
            return v[n - 1];
    }
}

int menor(int v[], int n) {
    int x;
    if (n == 1)
        return v[0];
    else {
        x = menor(v, n - 1);
        if (x < v[n - 1])
            return x;
        else
            return v[n - 1];
    }
}

int soma(int v[], int n) {
    if (n <= 0)
        return 0;
    return v[n - 1] + soma(v, n - 1);
}

int produto(int v[], int n) {
    if (n <= 0)
        return 1;
    return v[n - 1] * produto(v, n - 1);
}

int main() {
    int v[] = {1, 2, 3, 40, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;

    printf("Maior: %d\n", maior(v, tamanho));
    printf("Menor: %d\n", menor(v, tamanho));
    printf("Soma: %d\n", soma(v, tamanho));
    printf("Produto: %d\n", produto(v, tamanho));

    return 0;
}

