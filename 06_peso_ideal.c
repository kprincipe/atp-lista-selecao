#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float altura, peso_ideal;
    char sexo;

    // Entrada de dados
    printf("Digite altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo (F/M): ");
    scanf("%s", &sexo);

    // processamento de dados inseridos
    switch (sexo) {
    case 'F':
    case 'f':
        peso_ideal = (62.1 * altura) - 44.7;
        break;
    case 'M':
    case 'm':
        peso_ideal = (72.7 * altura) - 58;
        break;
    default:
        printf("Entrada indefinida\n");
        return 1;
    }

    // saida de dados processados
    printf("\n");
    printf("--------------------------------\n");
    printf("Peso ideal: %.2f\n", peso_ideal);
    printf("--------------------------------\n");
    
    return 0;
}
