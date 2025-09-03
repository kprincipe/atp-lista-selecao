#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    char grupo[1];
    int idade;

    // entrada de dados
    printf("Digite a idade: ");
    scanf("%i", &idade);

    printf("Grupo de risco (b/m/a): ");
    scanf("%s", grupo);

    //  saida de dados
    printf("------------------------------------------------------------\n");
    printf("    Grupo: %s    |    Idade: %i    |    Codigo: ", grupo, idade);
    
    switch (*grupo) {
    case 'b':
        if (idade >= 18 && idade < 24) printf("Codigo: 7\n");
        if (idade >= 24 && idade < 40) printf("Codigo: 4\n");
        if (idade >= 41 && idade <= 70) printf("Codigo: 1\n");
        break;
    case 'm':
        if (idade >= 18 && idade < 24) printf("Codigo: 8\n");
        if (idade >= 24 && idade < 40) printf("Codigo: 5\n");
        if (idade >= 41 && idade <= 70) printf("Codigo: 2\n");
        break;
    case 'a':
        if (idade >= 18 && idade < 24) printf("Codigo: 9\n");
        if (idade >= 24 && idade < 40) printf("Codigo: 6\n");
        if (idade >= 41 && idade <= 70) printf("Codigo: 3\n");
        break;
    default:
        printf("Opcao invalida\n");
    }
    
    printf("------------------------------------------------------------\n");
    return 0;
}
