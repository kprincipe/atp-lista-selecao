#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float horas_extras, horas_falta, horas_trab;
    float horas, premio;

    // entrada de dados do usuario
    printf("Horas extras (minutos): ");
    scanf("%f", &horas_extras);
    
    printf("Horas-falta  (minutos): ");
    scanf("%f", &horas_falta);

    // processamento de dados inseridos
    horas = ((horas_extras - (2/3 * horas_falta)));

    if (horas > 2400) {
        premio = 500;
    } else if (horas > 1800 && horas <= 2400) {
        premio = 400;
    } else if (horas > 1200 && horas <= 1800) {
        premio = 300;
    } else if (horas > 600 && horas <= 1200) {
        premio = 200;
    } else if (horas <= 600) {
        premio = 100;
    }

    horas_extras /= 60;
    horas_falta /= 60;
    horas /= 60;

    // saida de dados processados
    printf("\n");
    printf("--------------------------------\n");
    printf("Horas.........| %.2fh\n", horas);
    printf("Horas extras..| %.2fh\n", horas_extras);
    printf("Horas falta...| %.2fh\n", horas_falta);
    printf("Premio........| %.2f reais\n", premio);
    printf("--------------------------------\n");

    return 0;
}
