#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float salario;

    // entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // processamento e saida de dados processados
    printf("----------------------------\n");
    if (salario < 500) {
        salario *= 1.3;
        printf("Salario reajustado: %.2f reais\n", salario);
    } else {
        printf("Nao tem direito a ajuste\n");
    }
    printf("----------------------------\n");
    
    return 0;
}
