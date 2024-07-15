/*
Fazer um algoritmo que dado um número, verifica se o número é positivo ou negativo, ainda verifica se o número é divisível por 3 ao mesmo tempo.
*/

#include <stdio.h>
#define PI 3.1415

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0 && (num%3) == 0){
        printf("O número é positivo e divisível por 3.");
    } else if (num < 0 && (num%3) == 0){
        printf("O número é negativo e divisível por 3.");
    } else if (num > 0 && (num%3) != 0){
        printf("O número é positivo, mas não é divisível por 3");
    } else {
        printf("O número é negativo,, mas não é divisível por 3");
    }

    return 0;
}