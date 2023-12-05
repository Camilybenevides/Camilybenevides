


#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    float raio;

    
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    
    float area = PI * pow(raio, 2);

    
    float comprimento = 2 * PI * raio;

    
    printf("Área da circunferência: %.2f\n", area);
    printf("Comprimento da circunferência: %.2f\n", comprimento);

    return 0;
}
