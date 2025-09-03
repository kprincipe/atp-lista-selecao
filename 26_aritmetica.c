#include <stdio.h>

int main(void) {
    float a, b, r;
    char op;

    printf("Digite a operacao (Ex. 2 + 2): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
    case '+':
        r = a + b; break;
    case '*':
        r = a * b; break;
    case '/':
        r = a / b; break;
    case '-':
        r = a - b; break;
    default:
        printf("Operacao invalida\n");
        return 1;
    }

    printf("\n");
    printf("Resultado: %.2f\n", r);
    return 0;
}
