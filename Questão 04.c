


#include <stdio.h>

int main() {
    float num1, num2;

    
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;
    
    
    float divisao;
    if (num2 != 0) {
        divisao = num1 / num2;
        printf("Soma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\nDivisão: %.2f\n", soma, subtracao, multiplicacao, divisao);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    return 0;
}
