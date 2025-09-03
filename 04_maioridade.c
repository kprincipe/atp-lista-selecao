#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int idade = 0;
    
    // entrada de dados
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // processamento e saida
    if (idade >= 18) {
        printf("Maior de idade\n");
        return 0;
    }
    printf("Menor de idade\n");
    return 0;
}
