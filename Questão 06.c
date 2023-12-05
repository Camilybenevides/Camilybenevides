


#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número real: ");
    scanf("%f", &num3);

    
    float soma = num1 + num2 + num3;
    float subtracao = num1 - num2 - num3;
    float multiplicacao = num1 * num2 * num3;

    
    float divisao1, divisao2;
    if (num2 != 0) {
        divisao1 = num1 / num2;
        printf("Divisão 1: %.2f\n", divisao1);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    if (num3 != 0) {
        divisao2 = num2 / num3;
        printf("Divisão 2: %.2f\n", divisao2);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    
    printf("Soma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\n", soma, subtracao, multiplicacao);

    return 0;
}
