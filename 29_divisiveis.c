#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int a, b, c, d;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    
    printf("Segundo numero: ");
    scanf("%d", &b);
    
    printf("Terceiro numero: ");
    scanf("%d", &c);

    printf("Terceiro numero: ");
    scanf("%d", &c);


    printf("\n");
    printf("Divisiveis por 3:\n");
    printf("--------------------\n");
    if (a % 3 == 0) printf("%d ", a);
    if (b % 3 == 0) printf("%d ", b);
    if (c % 3 == 0) printf("%d ", c);
    if (d % 3 == 0) printf("%d ", d);
    printf("\n");
    printf("--------------------\n");
    printf("Divisiveis por 3: \n");
    printf("--------------------\n");
    if (a % 2 == 0) printf("%d ", a);
    if (b % 2 == 0) printf("%d ", b);
    if (c % 2 == 0) printf("%d ", c);
    if (d % 2 == 0) printf("%d ", d);
    printf("\n");
    printf("--------------------\n");
    
    return 0;
}
