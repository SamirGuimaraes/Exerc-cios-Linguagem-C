/*
Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuario ´
a informac¸ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na ˜
tela.
*/

#include <stdio.h>

struct aluno {
    char nome[50], curso[50];
    int matricula;
};

int main(){
    struct aluno a[5];

    int i;
    for (i = 0; i < 5; i++){
        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", a[i].nome);
        printf("Digite sua matrícula: ");
        scanf("%d", &a[i].matricula);
        printf("Escreva seu curso: ");
        scanf("%s", a[i].curso);
        printf("\n");
    }

    for (i = 0; i < 2; i++){
        printf("Aluno %dº: %s. \n", i+1, a[i].nome);
        printf("Matrícula: %d. \n", a[i].matricula);
        printf("Curso: %s. \n", a[i].curso);
        printf("\n");

    }

    return 0;
}