/*
Faça um programa que receba uma senha formada de quatro números inteiros, verifique se a senha está
correta e, caso não esteja, solicite novamente a senha. Se a senha entrada for a correta, deverá ser
apresentada a mensagem “Senha Correta”, caso contrário, “Senha Incorreta”. 
*/

#include <stdio.h>

int main(){
    int senhaCorreta = 1234, senhaUsuario;

    printf("Para entrar no sistema insira uma senha de 4 números: ");
    scanf("%d", &senhaUsuario);

    while (senhaUsuario != senhaCorreta){
        printf("Senha incorreta. \nInsira novamente a senha de 4 números: ");
        scanf("%d", &senhaUsuario);
    }

    printf("Senha Correta, acesso liberado!");

    return 0;
}
