#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int op;

    printf("(1) Mamifero\n");
    printf("(2) Ave\n");
    printf("(3) Reptil\n");
    printf("Selecione a classe: ");

    scanf("%d", &op);
    
    // processamento e saida de informacao
    switch(op) {
    case 1:
        printf("\n");
        printf("(1) Bipede\n");
        printf("(2) Quadrupede\n");
        printf("(3) Voador\n");
        printf("(4) Aquatico\n");
        printf("Digite o tipo: ");
        
        scanf("%d", &op);

        switch (op) {
        case 1:
            printf("\n");
            printf("(1) Carnivoro\n");
            printf("(2) Herbivoro\n");           
            printf("Digite a ordem: ");
            scanf("%d", &op);

            printf("----------------\n");
            if (op == 1) printf("Leao\n");
            if (op == 2) printf("Cavalo\n");
            printf("----------------\n");
            break;
        case 2:
            printf("\n");
            printf("(1) Onivoro\n");
            printf("(2) Frutifero\n");
            printf("Digite a ordem: ");
            scanf("%d", &op);

            printf("----------------\n");
            if (op == 1) printf("Homem\n");
            if (op == 2) printf("Macaco\n");
            printf("----------------\n");
            break;
        case 3:
            printf("----------------\n");
            printf("Morcego\n");
            printf("----------------\n");
            break;
        case 4:
            printf("----------------\n");
            printf("Baleia\n");
            printf("----------------\n");
            break;
        default:
            printf("----------------\n");
            printf("Tipo desconhecido\n");
            printf("----------------\n");
            return 1;
        }
        break;
    case 2:
        printf("\n");
        printf("(1) Nao-voador\n");
        printf("(2) Nadador\n");
        printf("(3) De rapina\n");
        printf("Digite o tipo: ");
        
        scanf("%d", &op);

        switch (op) {
        case 1:
            printf("\n");
            printf("(1) Tropical\n");
            printf("(2) Polar\n");
            printf("Digite a ordem: ");
            scanf("%d", &op);

            printf("----------------\n");
            if (op == 1) printf("Avestruz\n");
            if (op == 2) printf("Pinguim");
            printf("----------------\n");
            break;
        case 2:
            printf("----------------\n");
            printf("Pato\n");
            printf("----------------\n");
            break;
        case 3:
            printf("----------------\n");
            printf("Aguia\n");
            printf("----------------\n");
            break;
        default:
            printf("----------------\n");
            printf("Classe desconhecida\n");
            printf("----------------\n");
            return 1;
        }
        break;
    case 3:
        printf("\n");
        printf("(1) Com casco\n");
        printf("(2) Carnivoro\n");
        printf("(3) Sem patas\n");
        printf("Digite o tipo: ");
        
        scanf("%d", &op);

        printf("----------------\n");
        if (op == 1) printf("Tartaruga\n");
        if (op == 2) printf("Crocodilo\n");
        if (op == 3) printf("Cobra\n");
        printf("----------------\n");
        break;
    default:
        printf("----------------\n");
        printf("Classe desconhecida\n");
        printf("----------------\n");
        return 1;
    }
    
    return 0;
}
