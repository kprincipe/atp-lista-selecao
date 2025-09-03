#include <stdio.h>

int main(void) {
    // declaracao de variavel
    char a,b,c,d,e; // ASDFG

    // entrada de dados
    printf("Primeiro digito : ");
    scanf("%s", &a);
    printf("Segundo digito  : ");
    scanf("%s", &b);
    printf("Terceiro digito : ");
    scanf("%s", &c);
    printf("Quarto digito   : ");
    scanf("%s", &d);
    printf("Quinto digito   : ");
    scanf("%s", &e);

    // processamento e validacao dos dados inseridos e saida
    printf("\n");
    printf("================\n");
    if (a == 'A') {
        if (b == 'S') {
            if (c == 'D') {
                if (d == 'F') {
                    if (e == 'G') {
                        printf("Acesso liberado!\n");
                    } else {
                        printf("Acesso negado!\n");
                    }
                } else {
                    printf("Acesso negado!\n");
                }
            } else {
                printf("Acesso negado!\n");
            }
        } else {
            printf("Acesso negado!\n");
        }
    } else {
        printf("Acesso negado!\n");
    }
    printf("================\n");
    
    return 0;
}
