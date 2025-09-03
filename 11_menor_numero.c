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
    printf("\n");
    printf("----------------\n");
    if (n1 < n2) {
        printf("Menor numero: %d\n", n1);
        printf("----------------\n");
        return 0;
    }
    printf("Menor numero: %d\n", n2);
    printf("----------------\n");
    return 0;
}
