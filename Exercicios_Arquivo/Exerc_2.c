/*
 * Este programa em C cria um arquivo de texto chamado "arquivo_teste.txt"
 * e grava nele a frase "Meu primeiro programa em C.". Após a gravação,
 * o programa reabre o arquivo em modo de leitura e exibe seu conteúdo
 * no terminal. Se ocorrer algum erro ao abrir o arquivo, o programa
 * exibe uma mensagem de erro e finaliza a execução.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    FILE *arquivo;
    arquivo = fopen("arq_teste.txt", "w");

    if (arquivo == NULL){
        printf("Erro na abertura do arquivo.");
        system("pause");
        exit(1);
    }

    char frase[40] = "Meu primeiro arquivo em C";
    for(int i = 0; i <strlen(frase);i++){
        fputc(frase[i], arquivo);
    }
    fclose(arquivo);


    printf("Inicio da impressao do arquivo\n");
    // Reabertura do arquivo para impressão
    arquivo = fopen("arq_teste.txt", "r");
    if (arquivo == NULL){
        printf("Erro na reabertura do arquivo.");
        system("pause");
        exit(1);
    }

    char c = fgetc(arquivo);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(arquivo);

    }
    fclose(arquivo);
    printf("\nFim da impressão do arquivo\n");


    system("pause");
    return 0;
}