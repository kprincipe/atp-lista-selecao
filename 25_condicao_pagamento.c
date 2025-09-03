#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float preco_etiqueta, preco_final;
    int condicao_pagamento;

    // entrada de dados
    printf("Preco de etiqueta: ");
    scanf("%f", &preco_etiqueta);

    printf("\n");
    printf("(1) A vista dinheiro/cheque, desconto 10%%\n");
    printf("(2) A vista cartao de credito, desconto 5%%\n");
    printf("(3) 2x preco normal sem juros\n");
    printf("(4) 3x juros de 10%%\n");
    printf("\n");

    printf("Condicao de pagamento: ");
    scanf("%d", &condicao_pagamento);

    // processamento de dados
    switch (condicao_pagamento) {
    case 1:
        preco_final = preco_etiqueta * 0.9;
        break;
    case 2:
        preco_final = preco_etiqueta * 0.95;
        break;
    case 3:
        preco_final = preco_etiqueta;
        break;
    case 4:
        preco_final = preco_etiqueta + (preco_etiqueta * 0.3);
        break;
    default:
        printf("Opcao invalida\n");
        return 1;
    }

    // saida de dados
    printf("\n");
    printf("----------------------\n");
    printf("| Codigo   : %d\n", condicao_pagamento);
    printf("----------------------\n");
    printf("| Preco    : %.2f\n", preco_final);
    printf("----------------------\n");
    printf("| Parcelas : %.2f\n", preco_final / 3);
    printf("----------------------\n");
    return 0;
}
