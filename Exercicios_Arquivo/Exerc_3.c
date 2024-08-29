/*
 * Este programa realiza duas operações principais:
 * 
 * 1. Cria um arquivo "minusculo.txt" e escreve um texto em minúsculas.
 * 2. Lê o texto do arquivo "minusculo.txt", converte-o para maiúsculas e grava em "maisculo.txt".
 * 
 * O programa inclui verificações de erro para a abertura dos arquivos e exibe mensagens de erro, se necessário.
 * Após a execução, uma mensagem de sucesso é exibida.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    FILE *f1, *f2;
    
    // Abre o arquivo para escrita
    f1 = fopen("minusculo.txt", "w");
    if (f1 == NULL) {
        perror("Erro ao abrir o arquivo minusculo.txt");
        exit(EXIT_FAILURE);
    }

    char texto[250] = "C e uma linguagem de programação compilada \nde propósito geral, estruturada, imperativa, \nprocedural, padronizada pela ISO, criada em 1972, \npor Dennis Ritchie, no AT&T Bell Labs ";
    for (int i = 0; i < strlen(texto); i++) {
        fputc(texto[i], f1);
    }
    fclose(f1);

    // Abre os arquivos para leitura e escrita
    f1 = fopen("minusculo.txt", "r");
    f2 = fopen("maisculo.txt", "w");
    if (f1 == NULL) {
        perror("Erro ao abrir o arquivo minusculo.txt");
        exit(EXIT_FAILURE);
    }
    if (f2 == NULL) {
        perror("Erro ao abrir o arquivo maisculo.txt");
        fclose(f1);  // Fecha f1 antes de sair
        exit(EXIT_FAILURE);
    }

    char c = fgetc(f1);
    while (c != EOF) {
        fputc(toupper(c), f2);
        c = fgetc(f1);
    }
    fclose(f1);
    fclose(f2);

    return 0;
}