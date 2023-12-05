

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    float raio;

    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    
    float volume = (4.0 / 3.0) * PI * pow(raio, 3);

    
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
