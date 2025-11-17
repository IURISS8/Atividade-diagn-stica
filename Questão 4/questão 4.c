#include <stdio.h>

float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    float a, b;
    int op;
    scanf("%f %f %d", &a, &b, &op);

    if (op == 1) printf("%.2f\n", somar(a, b));
    else if (op == 2) printf("%.2f\n", subtrair(a, b));
    else if (op == 3) printf("%.2f\n", multiplicar(a, b));
    else if (op == 4) {
        if (b == 0) printf("Erro\n");
        else printf("%.2f\n", dividir(a, b));
    } else printf("Erro\n");

    return 0;
}
