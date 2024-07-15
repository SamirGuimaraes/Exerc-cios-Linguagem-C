/*
Este programa em C solicita que o usuário digite um número inteiro positivo.
Em seguida, permite que o usuário escolha entre imprimir os números pares ou ímpares
antecessores até o número digitado. O programa valida a entrada para garantir que
o número seja positivo e que a escolha entre pares ou ímpares seja válida.
*/

#include <stdio.h>

int imprimirImpares(int numMax){
    int numImpar = 1;

    do{
        printf("-%d-", numImpar);
        numImpar += 2;
    }while(numImpar <= numMax);

    return 0;
}

int imprimirPares(int numMax){
    int numPar = 0;

    do{
        printf("-%d-", numPar);
        numPar += 2;        
    }while(numPar <= numMax);
}

int main(){
    int numMax, opcao;

    printf("Digite um número o qual deseja imprimrir seus antecessores: ");
    scanf("%d", &numMax);
    while(numMax <= 0){
        printf("Digite um número positivo para imprimir seus antecessores: ");       
        scanf("%d", &numMax);
    }

    do{
    printf("Para imprimir os números pares digite 0, para imprimir os números ímpares digite 1: ");
    scanf("%d", &opcao);
    }while(opcao != 0 && opcao != 1);

    if (opcao == 0){
        printf("Números pares antecessores de %d\n", numMax);
        imprimirPares(numMax);        
    }else{
        printf("Números ímpares antecessores de %d\n", numMax);
        imprimirImpares(numMax);
    }

    return 0;
}