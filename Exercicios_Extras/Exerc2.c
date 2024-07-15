/*
Dados quatro números distintos, desenvolver um algoritmo que imprima a soma dos três menores.
*/

#include <stdio.h>
#define max 4

int main() {
    int vetor[max], maior = 0;

    int i, soma;
    for (i = 0; i < max; i++){
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("%d é o maior valor digitado.", maior);

    soma = 0;
    for (i = 0; i < max; i++){
        if (vetor[i] != maior){
            soma = soma + vetor[i];
        } else{
            continue;
        }
    }

    printf("\nE a soma dos três menores número corresponde a: %d", soma);

}