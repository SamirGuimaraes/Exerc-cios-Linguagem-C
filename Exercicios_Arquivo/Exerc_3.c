#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    FILE *f1, *f2;
    f1 = fopen("minusculo.txt", "w");

    if(f1 == NULL){
        printf("Erro na abertura dos arquivos.\n");
        system("pause");
        exit(1);
    }

    char texto[250] = "C é uma linguagem de programação compilada \nde propósito geral, estrturada, imperativa, \nprocedural, padronizada pela ISO, criada em 1972, \npor Dennis Ritchie. no AT&T Bell Labs ";
    for(int i = 0; i <strlen(texto);i++){
        fputc(texto[i], f1);
    }
    fclose(f1);

    f1 = fopen("minusculo.txt", "r");
    f2 = fopen("maisculo.txt", "w");
    if(f1 == NULL || f2 == NULL){
        printf("Erro na abertura dos arquivos.");
        system("pause");
        exit(1);
    }

    char c = fgetc(f1);
    while(c != EOF){
        fputc(toupper(c),f2);
        c = fgetc(f1);
    }
    fclose(f1);
    fclose(f2);

    system("pause");
    return 0;
}