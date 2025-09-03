#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int n1, n2;

    // entrada de dados
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Segundo numero : ");
    scanf("%d", &n2);

    // processamento e saida de dados inseridos
    if (n1 > n2) {
        printf("Maior numero: %d\n", n1);
        return 0;
    }
    printf("Maior numero: %d\n", n2);
    return 0;
}
