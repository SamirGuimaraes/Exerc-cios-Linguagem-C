/*
Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'
*/

#include <stdio.h>

int funcaoDelta(int a, int b, int c){
    return (b*b) - 4*a*c;
}

int main(){
    int a, b, c, delta;

    do{
       printf("Digite o coeficiente de a: ");
       scanf("%d", &a);
       printf("Digite o conficiente de b: ");
       scanf("%d", &b);
       printf("Digite o coeficiente de c: ");
       scanf("%d", &c);
    }while(a < 0 || b < 0 || c < 0);

    delta = funcaoDelta(a, b, c);

    printf("O delta corresponde a %d", delta);
}