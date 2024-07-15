/*
Escreva	 um	 programa	 para	 ler	 3	 valores	 inteiros	 (considere	 que	 	 não	
serão	lidos	valores	iguais)	e	escrevê-los	em	ordem	crescente.
*/

#include <stdio.h>

int main() {
    int n1, n2, n3, maior, menor, medio;

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);

    printf("Digite um segundo número: ");
    scanf("%d", &n2);

    printf("Digite um terceiro número: ");
    scanf("%d", &n3);

    maior = n1;
    if (n2 > maior && n2 > n3) {
        maior = n2;
    } else if (n3 > maior && n3 > n2) {
        maior = n3;
    }

    menor = n1;
    if (n2 < menor && n2 < n3) {
        menor = n2;
    } else if (n3 < menor && n3 < n1) { 
        menor = n3;
    }

    if (n1 != maior && n1 != menor) {
        medio = n1;
    } else if (n2 != maior && n2 != menor) {
        medio = n2;
    } else {
        medio = n3;
    }

    printf("Em ordem crescente os valores ficam: %d - %d - %d.\n", menor, medio, maior);

    return 0;
}