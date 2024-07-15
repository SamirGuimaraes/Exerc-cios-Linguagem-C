/*
Faça um programa que implemente um menu onde o usurário deverá selecionar 1 ou 0. Caso seja entrado
um número diferente, o programa deverá solicitar uma nova opção. 
*/

#include <stdio.h>

int main(){
    int num;

    do{
    printf("Digite o número 0 ou 1: ");
    scanf("%d", &num);

    }while(num < 0 || num > 1);

    return 0;
}
