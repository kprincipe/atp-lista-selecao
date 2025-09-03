#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float valor, codigo;

    // entrada de dados
    printf("Digite o valor  : ");
    scanf("%f", &valor);

    printf("Digite o codigo : ");
    scanf("%f", &codigo);

    printf("--------------------------------\n");
    printf("Procedencia: ");

    // processamento e saida de dados inseridos
    if (codigo == 1) {
        printf("Sul\n");
    } else if (codigo == 2) {
        printf("Norte\n");
    } else if (codigo == 3) {
        printf("Leste\n");
    } else if (codigo == 4) {
        printf("Oeste\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Nordeste\n");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Centro-Oeste\n");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Nordeste\n");
    } else if (codigo == 7.8 || codigo == 9) {
        printf("Sudeste\n");
    } else {
        printf("Procedencia indefinida\n");
    }
    printf("--------------------------------\n");
    return 0;
}
