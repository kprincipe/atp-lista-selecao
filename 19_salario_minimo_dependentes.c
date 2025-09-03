#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float salario_minimo, salario_liquido, salario_bruto, horas_trabalhadas, horas_extras, gratificacao;
    float imposto; // porcentagem em decimal
    int dependentes;

    // entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario_minimo);

    printf("Horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Horas extras: ");
    scanf("%f", &horas_extras);

    printf("Numero de dependentes: ");
    scanf("%d", &dependentes);

    // processamento de dados
    float const VALOR_HORA = 0.2 * salario_minimo;
    salario_bruto = (VALOR_HORA * horas_trabalhadas) + (32 * dependentes);
    
    salario_bruto += horas_extras * (1.5 * VALOR_HORA);
    
    if (salario_bruto < 200) {
        imposto = 0;
    } else if (salario_bruto >= 200 && salario_bruto <= 500) {
        imposto = 0.1;
    } else if (salario_bruto > 500) {
        imposto = 0.2;
    }

    salario_liquido = salario_bruto - (salario_bruto * imposto);
    
    if (salario_liquido <= 350) {
        gratificacao = 100;
    } else if (salario_liquido > 350) {
        gratificacao = 50;
    }
    
    // saida de dados processados
    printf("\n");
    printf("--------------------------------\n");
    printf("Salario bruto....| %.2f\n", salario_bruto);
    printf("Salario liquido..| %.2f\n", salario_liquido);
    printf("Gratificacao.....| %.2f\n", gratificacao);
    printf("A receber........| %.2f\n", salario_liquido + gratificacao);
    printf("--------------------------------\n");
    
    return 0;
}
