
#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    
    int somaQuadrados = (a * a) + (b * b) + (c * c);

    
    printf("A soma dos quadrados de %d, %d e %d é: %d\n", a, b, c, somaQuadrados);

    return 0;
}
