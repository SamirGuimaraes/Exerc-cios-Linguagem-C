/*
Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Insira um valor para saber sua divisibilidade por 3 e 5: ");
    scanf("%d", &num);

    if ((num%5 == 0) && (num%3 == 0)){
        printf("Sim, %d é divisível por 5 e 3 ao mesmo tempo.", num);
    }else{
        printf("Não, %d não é divisível por 5 e 3 ao mesmo tempo.", num);
    }

}