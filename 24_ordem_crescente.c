#include <stdio.h>

int main(void) {
    int a, b, c, tmp;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > c) {
        tmp = c;
        c = a;
        a = tmp;
    }
    
    if (b > c) {
        tmp = c;
        c = b;
        b = tmp;
    }
    
    if (a > b) {
        tmp = b;
        b = a;
        a = tmp;
    }
    
    printf("%d, %d, %d\n", a, b, c);
    
    return 0;
}
