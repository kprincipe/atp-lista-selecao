#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float salario, novo_salario = 0;

    // entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // processamento de dados
    if (salario <= 300) novo_salario = 1.5 * salario;
    else novo_salario = 1.3 * salario;

    // saida de dados processados
    printf("\n");
    printf("--------------------------------\n");
    printf("Salario ajustado: %.2f\n", novo_salario);
    printf("--------------------------------\n");
    return 0;
}
