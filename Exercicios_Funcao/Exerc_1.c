#include <stdio.h>

// Função que calcula o dobro de um número
int funcao(int num_inicial){
    return num_inicial * 2;
}

int main(){
    int num_inicial, num_final;
    
    // Lê um número do usuário
    printf("Digite um número para saber o dobro: ");
    scanf("%d", &num_inicial);

    // Calcula o dobro do número usando a função funcao
    num_final = funcao(num_inicial);

    // Imprime o resultado
    printf("\nO dobro de %d é igual a %d.", num_inicial, num_final);

    return 0;
}