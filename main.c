#include <stdio.h>

int main() {
    float a, b;
    int opcao;

    printf("Calculadora Simples\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    if(opcao == 1)
        printf("Resultado: %.2f\n", a + b);
    else if(opcao == 2)
        printf("Resultado: %.2f\n", a - b);
    else if(opcao == 3)
        printf("Resultado: %.2f\n", a * b);
    else if(opcao == 4)
        printf("Resultado: %.2f\n", a / b);
    else
        printf("Opcao invalida\n");

    return 0;
}
