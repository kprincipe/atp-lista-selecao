#include <stdio.h>

int main(void) {
    char frase[256];
    int qtd_vogais = 0;
    
    printf("Frase: ");
    fgets(frase, 256, stdin);

    int sz = 0;
    while (frase[sz] != '\n') {
        switch(frase[sz]) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            qtd_vogais += 1;
            break;
        default:
        }
        sz++;
    }

    // 32 diff
    
    printf("\n");
    printf("----------------\n");
    printf("Qtd. vogais: %d\n", qtd_vogais);
    printf("----------------\n");
    return 0;
}
