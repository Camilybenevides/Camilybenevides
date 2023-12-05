
#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    int soma = num1 + num2 + num3;
    int subtracao = num1 - num2 - num3;
    int multiplicacao = num1 * num2 * num3;
    
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    
    return 0;
}
