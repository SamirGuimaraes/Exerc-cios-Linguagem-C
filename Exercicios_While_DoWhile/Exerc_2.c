/*
Faça um programa que leia número reais maiores que zero. Quando for entrado o número zero, o
programa deverá apresentar quantos números foram entrados e a média destes. 
*/

#include <stdio.h>

int main(){
    int num, cont = 0, soma;
    float media;

    do{
        printf("Digite um número inteiro e maior que 0: ");
        scanf("%d", &num);

        soma += num;
        cont++;

        if (num == 0){
            media = soma/cont;

            printf("Com %d números digitado a sua média corresponde a:  %f.", cont, media);
        }

    }while(num > 0);

    return 0;
}