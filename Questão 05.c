

#include <stdio.h>

int main() {
    float numero1, numero2, resultado;

    printf("Digite o primeiro número real : ");
    scanf("%f", &numero1);

    printf("Digite o segundo número real : ");
    scanf("%f", &numero2);

    resultado = numero1 / numero2;

    printf("O resultado da divisão é: %.2f\n", resultado);

    return 0;
}
