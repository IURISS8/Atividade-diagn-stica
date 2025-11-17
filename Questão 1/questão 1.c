#include <stdio.h>

float media(int v[], int n) {
    int i, soma = 0;
    for (i = 0; i < n; i++) soma += v[i];
    return (float)soma / n;
}

int maior(int v[], int n) {
    int i, m = v[0];
    for (i = 1; i < n; i++)
        if (v[i] > m) m = v[i];
    return m;
}

int menor(int v[], int n) {
    int i, m = v[0];
    for (i = 1; i < n; i++)
        if (v[i] < m) m = v[i];
    return m;
}

int contarPares(int v[], int n) {
    int i, c = 0;
    for (i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++;
    return c;
}

int main() {
    int v[10], i;
    
    for (i = 0; i < 10; i++)
        scanf("%d", &v[i]);

    printf("Media: %.2f\n", media(v, 10));
    printf("Maior: %d\n", maior(v, 10));
    printf("Menor: %d\n", menor(v, 10));
    printf("Pares: %d\n", contarPares(v, 10));

    return 0;
}
