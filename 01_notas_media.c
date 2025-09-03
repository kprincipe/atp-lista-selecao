#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float nota1, nota2, nota3, nota4;
    float media = 0;

    // entrada de dados do usuario
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    // processamento dos dados
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // selecao e saida de dados processados
    if (media >= 7)
        printf("NF = %.2f: APROVADO!\n", media);
    else
        printf("NF = %.2f: REPROVADO!\n", media);
    
    return 0;
}
