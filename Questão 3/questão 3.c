#include <stdio.h>

int somar_digitos(int n) {
    int soma = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", somar_digitos(n));
    return 0;
}
