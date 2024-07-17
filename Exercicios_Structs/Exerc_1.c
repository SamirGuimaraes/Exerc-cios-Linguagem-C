/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura.
*/
#include <stdio.h>

struct cadastro {
    char nome[50], endereco[50];
    int idade;
};

int main(){

    struct cadastro cadastro;

    printf("Digite seu nome: ");
    scanf("%s", cadastro.nome);

    printf("Digite o nome da sua rua: ");
    scanf("%s", cadastro.endereco);

    printf("Insira sua idade: ");
    scanf("%d", &cadastro.idade);


    printf("\n---- Cadastro Finalizado ---- \n");
    printf("Nome: %s \n", cadastro.nome);
    printf("Endereço: %s \n", cadastro.endereco);
    printf("Idade: %d anos\n", cadastro.idade);

    return 0;
}