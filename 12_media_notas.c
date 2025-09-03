#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float nota1, nota2, nota3;
    float media = 0;

    // entrada de dados
    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Quarta nota  : ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    // processamento de dados
    media = (nota1 + nota2 + nota3) / 3;

    printf("\n");
    printf("Media: %.2f -- ", media);
    if (media >= 0 && media < 5) {
        printf("reprovado!\n");
    }
    if (media >= 5 && media < 7) {
        printf("exame final!\n");
    }
    if (media >= 7 && media <= 10) {
        printf("aprovado!\n");
    }
    return 0;
}
