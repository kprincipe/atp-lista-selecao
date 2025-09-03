#include <stdio.h>

int main(void) {
    // declaracao de variavel
    char a,b,c,d,e; // ASDFG

    // entrada de dados
    printf("Digite o caracter 1: ");
    scanf("%s", &a);
    printf("Digite a senha: ");
    scanf("%s", &b);
    printf("Digite a senha: ");
    scanf("%s", &c);
    printf("Digite a senha: ");
    scanf("%s", &d);
    printf("Digite a senha: ");
    scanf("%s", &e);

    // processamento e validacao dos dados inseridos e saida
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
    
    return 0;
}
