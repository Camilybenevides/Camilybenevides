
#include <stdio.h>

int main() {
    float b1, b2, h;

    
    printf("Digite o comprimento da base maior (b1): ");
    scanf("%f", &b1);

    printf("Digite o comprimento da base menor (b2): ");
    scanf("%f", &b2);

    printf("Digite a altura (h) do trapézio: ");
    scanf("%f", &h);

    
    float area = (h * (b1 + b2)) / 2.0;

    
    printf("Área do trapézio: %.2f\n", area);

    return 0;
}