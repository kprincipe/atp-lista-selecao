#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int codigo;

    // entrada de dados
    printf("Codigo de cargo: ");
    scanf("%d", &codigo);

    // saida de dados
    printf("--------------------------------\n");
    
    switch (codigo) {
    case 1:
        printf("Cargo   : Escriturario\n");
        printf("Aumento : 50.00%%\n");
        break;
    case 2:
        printf("Cargo   : Secretario\n");
        printf("Aumento : 35.00%%\n");
        break;
    case 3:
        printf("Cargo   : Caixa\n");
        printf("Aumento : 20.00%%\n");
        break;
    case 4:
        printf("Cargo   : Gerente\n");
        printf("Aumento : 10.00%%\n");
        break;
    case 5:
        printf("Cargo   : Diretor\n");
        printf("Aumento : Nao tem aumento\n");
        break;
    default:
        printf("Cargo desconhecido\n");
    }
    
    printf("--------------------------------\n");
    
    return 0;
}
