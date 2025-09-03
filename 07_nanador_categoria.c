#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int idade;

    // entrada de dados do usuario
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // processamento e saida de dados
    if (idade > 18) {
        printf("Modalidade \"Senior\"\n");
        return 0;
    } else if (idade < 18 && idade >= 14) {
        printf("Modalidade \"Juvenil B\"\n");
        return 0;
    } else if (idade < 14 && idade >= 11) {
        printf("Modalidade \"Juvenil A\"");
        return 0;
    } else if (idade < 11 && idade >= 8) {
        printf("Modalidade \"Infantil B\"\n");
        return 0;
    } else if (idade < 8 && idade >= 5) {
        printf("Modalidade \"Infantil A\"\n");
    }
    return 0;
}
