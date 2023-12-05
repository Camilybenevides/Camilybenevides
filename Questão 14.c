 
#include <stdio.h>

int main() {
    float quilometros, litros;
    float consumo;

    printf("Digite a quantidade de quilômetros rodados: ");
    scanf("%f", &quilometros);

    printf("Digite a quantidade de litros de combustível: ");
    scanf("%f", &litros);

    consumo = quilometros / litros;

    printf("O consumo do carro é: %.2f km/l\n", consumo);

    return 0;
}
