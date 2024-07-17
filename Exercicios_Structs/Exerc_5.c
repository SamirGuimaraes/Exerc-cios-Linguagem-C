/*
Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ´
ate 10 alunos. Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0). 
*/
#include <stdio.h>

typedef struct escola {
  int codigo, matricula;
    float nota1, nota2;
    char nome[50];
} aluno;


int main() {
    aluno e[10];

    int i;
    for (i = 0; i < 10; i++){
      printf("Insira o Nome do %dº aluno: \n", i+1);
        scanf("%s", e[i].nome);
        printf("Insira o código da disciplina: \n");
        scanf("%d", &e[i].codigo);
        printf("Insira a matrícula: \n");
        scanf("%d", &e[i].matricula);
        printf("Insira a primeira nota: \n");
        scanf("%f", &e[i].nota1);
        printf("Insira a segunda nota: \n");
        scanf("%f", &e[i].nota2);
        printf("\n");

    } //For responsável por fazer a leitura das informações de cada aluno.

    for (i = 0; i < 10; i++){
    printf("Nome: %s \n", e[i].nome);
        printf("Código Disciplina: %d \n", e[i].codigo);
        printf("Matrícula: %d \n", e[i].matricula);
        printf("Nota 1: %.2f \n", e[i].nota1);
        printf("Nota 2: %.2f \n", e[i].nota2);
        float media = ((e[i].nota1 * 1.0) + (e[i].nota2 * 2.0)) / 3; //Media ponderada com manda o enunciado que faz com que a nota 1 tenha peso 1.0 e a nota 2 tenha peso 2.0
        printf("Media das notas: %.2f \n", media);
        printf("\n");

    } //For responsável por imprimir na tela as informações dos alunos lidas anteriormente e acrescentado de uma média ponderadas das duas notas.



  return 0;
}