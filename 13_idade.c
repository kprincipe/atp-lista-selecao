#include <stdio.h>

int main(void) {
    int idade;
    
    printf("Digite idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 2) {
        printf("Recem-nascido\n");
    }
    if (idade > 2 && idade <=  11) {
        printf("Crianca\n");
    }
    if (idade > 11 && idade <= 19) {
        printf("Adolescente\n");
    }
    if (idade > 19 && idade <= 55) {
        printf("Adulto\n");
    }
    if (idade > 55) printf("Idoso\n");
    
    return 0;
}
