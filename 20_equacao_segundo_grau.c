#include <stdio.h>
#include <math.h>

// ax^2 + bx + c = y

int main(void) {
    // declaracao de variaveis
    float a, b, c, delta;
    float x1, x2, xv, yv;

    // entrada de dados
    printf("Coeficiente a: ");
    scanf("%f", &a);

    printf("Coeficiente b: ");
    scanf("%f", &b);

    printf("Termo independente: ");
    scanf("%f", &c);

    // processamento de dados
    delta = pow(b, 2) - (4 * a * c);
    if (delta < 0) {
        printf("Equacao nao possui solucao real\n");
        return 1;
    }
    
    x1 = (((-1) * b) + sqrt(delta)) / (2 * a);
    x2 = (((-1) * b) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    xv = ((-1) * b) / (2 * a);
    yv = ((-1) * delta) / (4 * a);

    // saida de dados
    printf("\n");
    printf("------------------------------------\n");
    printf("Raizes   = (%.2f, 0) e (%.2f, 0)\n", x1, x2);
    printf("Delta    = %.2f\n", delta);
    printf("Vertice  = (%.2f, %.2f)\n", xv, yv);
    printf("------------------------------------\n");
    
    return 0;
}
