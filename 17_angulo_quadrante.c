#include <stdio.h>

int main(void) {
    int angulo;

    printf("Digite um angulo: ");
    scanf("%d", &angulo);

    if (angulo > 0 && angulo <= 90) {
        printf("Pertence ao quadrante 1\n");
        return 0;
    } else if (angulo > 90 && angulo <= 180) {
        printf("Pertence ao quadrante 2\n");
        return 0;
    } else if (angulo > 180 && angulo <= 270) {
        printf("Pertence ao quadrante 3\n");
        return 0;
    } else if (angulo > 270 && angulo <= 360) {
        printf("Pertence ao quadrante 3\n");
        return 0;
    }

    if (angulo < 0 && angulo > -90) {
        printf("Pertence ao quadrante 1\n");
        return 0;
    } else if (angulo < -90 && angulo > -180) {
        printf("Pertence ao quadrante 2\n");
    }
    
    return 0;
}
