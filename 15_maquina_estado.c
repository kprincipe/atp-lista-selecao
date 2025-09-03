#include <stdio.h>
#include <math.h>

int main(void) {
    // declaracao de variaveis
    int estado = 0;

    printf("Selecione uma opcao:\n");
    printf("    (1) Soma\n");
    printf("    (2) Raiz quadrada\n");
    printf("    (3) Finalizar\n");

    // entrada de dados
    scanf("%d", &estado);

    // estado, processamento e saida
    switch(estado) {
    case 1:
        int a, b, soma;

        printf("\n");
        printf("Primeiro termo : ");
        scanf("%d", &a);
        printf("Segundo termo  : ");
        scanf("%d", &b);

        soma = a + b;

        printf("Resultado: %d\n", soma);
        break;
    case 2:
        float n, r = 0;
        printf("\n");
        printf("Numero: ");
        scanf("%f", &n);

        r = sqrt(n);

        printf("Resultado: %.2f\n", r);
        break;
    case 3: break;
    default:
        printf("Opcao invalida!\n");
    }
    
    return 0;
}
