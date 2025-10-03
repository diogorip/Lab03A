#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Introduza uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data lida: %02d/%02d/%04d\n", dia, mes, ano);
    return 0;
}
