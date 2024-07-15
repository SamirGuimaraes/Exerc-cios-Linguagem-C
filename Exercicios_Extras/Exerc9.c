/*
Fazer um algoritmo que calcule e imprima o salário reajustado de um funcionário de acordo com as seguintes regras:

• Salário de até R$300,00 reajuste de 50%;
• Salário maiores que R$300,00 reajuste de 30%;
*/

#include <stdio.h>


int main() {
    float salario;

    printf("Insira seu salário para reajuste no aumento: ");
    scanf("%f", &salario);

    if (salario <= 300){
        salario = salario * 1.5;
        printf("Com um reajuste de 50 por cento seu salário será de: R$%.2f", salario);

    } else{
        salario = salario * 1.3;
        printf("Com um reajuste de 30 por cento seu salario será de R$%.2f", salario);

    }

    return 0;
}