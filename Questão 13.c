
#include <stdio.h>

int main() {
    int A, B, C;
    int soma;
    int quadrado_soma;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    soma = A + B + C;
    quadrado_soma = soma * soma;

    printf("O quadrado da soma é: %d\n", quadrado_soma);

    return 0;
}
