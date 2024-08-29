/*
 * Manipulação de Arquivo em C 
 * Este programa em C cria um arquivo de texto chamado "arquivo_teste.txt"
 * e grava nele a frase "Meu primeiro programa em C.".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq;
    arq = fopen("arquivo_teste.txt", "w");

    if (arq == NULL){
        printf("Erro na abertura de aquivo!");
        system("pause");
        exit(1);
    }

    char frase[40] = "Meu primeiro programa em C.";
    for(int i = 0; i < strlen(frase);i++){
        fputc(frase[i], arq);
    }
    fclose(arq);

    system("pause");
    return 0;
}