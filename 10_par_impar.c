#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int n = 0;

    // entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n);

    // processamento e saida de dados inseridos
    if (n % 2 == 0) {
        printf("Numero par!\n");
        return 0;
    }
    printf("Numero impar!\n");
    return 0;
}
