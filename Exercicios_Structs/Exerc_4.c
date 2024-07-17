/*
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação. 
*/
#include <stdio.h>

struct escola {
    int matricula, p1, p2, p3;
    char nome[50];
};

int main(){
    struct escola e[5];

    int i;
    for (i = 0; i < 5; i++){
        printf("Escreva o nome do  %dº aluno: ", i+1);
        scanf("%s", e[i].nome);
        printf("Digite a matrícula: ");
        scanf("%d", &e[i].matricula);
        printf("Insira a nota da primeira prova: ");
        scanf("%d", &e[i].p1);
        printf("Insira a nota da segunda prova: ");
        scanf("%d", &e[i].p2);
        printf("Insira a nota de terceira prova: ");
        scanf("%d", &e[i].p3);
        printf("\n");


    }

    int maiorP1, maiorP2, maiorP3, mediaMaior, mediaMenor;
    maiorP1 = e[0].p1;
    mediaMaior = (e[0].p1 + e[0].p2 + e[0].p3)/3;
    mediaMenor = (e[0].p1 + e[0].p2 + e[0].p3)/3;
    for (i = 0; i < 5; i++){

        if (maiorP1 < e[i].p1){
            maiorP1 = e[i].p1;
        } //For responsável por comparar as notas da p1 e descobrir a maior.

        if (mediaMaior < (e[i].p1 + e[i].p2 + e[i].p3)/3){
            mediaMaior = (e[i].p1 + e[i].p2 + e[i].p3)/3;
        } //For responsável por comparar as média e descobrir a maior.

        if (mediaMenor > (e[i].p1 + e[i].p2 + e[i].p3)/3){
            mediaMenor = (e[i].p1 + e[i].p2 + e[i].p3)/3;
        } //For responsável por comparar as médias e descobrir a menor.

    }

    int media;
    for (i = 0; i < 5; i++){
        printf("\nAluno %s: ", e[i].nome);
        printf("\nMatrícula %d: ", e[i].matricula);

        media = (e[i].p1 + e[i].p2 + e[i].p3)/3;
        if (media > 6){
            printf("\nSituação: Aprovado.");
        } else{
            printf("\nSituação: Reprovado.", i+1);
        }
        printf("\n");
    }

    printf("\nMaior nota da primeira prova: %d.", maiorP1);    
    printf("\nMaior média das notas entre os alunos: %d.", mediaMaior);
    printf("\nMenor média das notas entre os alunos: %d", mediaMenor);
}