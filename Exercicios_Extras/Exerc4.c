/*
Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de “y” de acordo com as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;
*/

#include <stdio.h>

int main() {
    int x, y;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if (x < 1){

        y = x;
        printf("Como x é menor que 1 logo y = x, ou seja, y será %d.", y);
    } else if (x == 0){
        y = 0;
        printf("Como x é igual a 0 logo y =0, ou seja y será %d.", y);
    } else{
        y = x*x;
        printf("Como x é maior que 1 logo y = x², ou seja, y será %d.", y);
    }

    return 0;
}