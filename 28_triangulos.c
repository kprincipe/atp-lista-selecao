#include <stdio.h>

int main(void) {
    // declaracao variaveis
    int a, b, c;

    // entrada de dados
    printf("Primeiro lado: ");
    scanf("%d", &a);

    printf("Segundo lado: ");
    scanf("%d", &b);

    printf("Terceiro lado: ");
    scanf("%d", &c);

    // processamento e saida
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        printf("\n");
        printf("------------------------\n");
        if (a == b && c != a || a == c && b != a || b == c && a != b) {
            printf("| Triangulo isosceles\n");
        }
        if (a != b && a != c && b != c) {
            printf("| Triangulo escaleno\n");
        }
        if (a == b && b == c) {
            printf("| Triangulo equilatero\n");
        }
        printf("------------------------\n");
    } else {
        printf("Nao e um triangulo\n");
        return 1;
    }
    
    return 0;
}
