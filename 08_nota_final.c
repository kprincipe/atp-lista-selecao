#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float nota_lab, nota_aval, nota_exame;
    float nota_final;

    // entrada de dados pelo usuario
    printf("Nota do trabalho de laboratorio : ");
    scanf("%f", &nota_lab);
    
    printf("Nota da avaliacao semestral     : ");
    scanf("%f", &nota_aval);
    
    printf("Nota do exame final             : ");
    scanf("%f", &nota_exame);

    // processamento de dados inseridos
    nota_final = ((nota_lab * 2) + (nota_aval * 3) + (nota_exame * 5)) / 10;

    // saida de dados processados
    printf("\n");
    printf("Nota final: %.2f\n", nota_final);
    
    if (nota_final >= 8) {
        printf("Conceito  : A\n");
    }
    if (nota_final >= 7 && nota_final < 8) {
        printf("Conceito  : B\n");
    }
    if (nota_final >= 6 && nota_final < 7) {
        printf("Conceito  : C\n");
    }
    if (nota_final >= 5 && nota_final < 6) {
        printf("Conceito  : D\n");
    }
    if (nota_final < 5) {
        printf("Conceito  : E\n");
    }
    
    return 0;
}
