/*
Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme ˜
solicitado abaixo:
• Horario: composto de hora, minutos e segundos. ´
• Data: composto de dia, mes e ano. ˆ
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.
*/
#include <stdio.h>

struct estrutura {
    int hora, minuto, segundo;
    int dia, ano, mes;
    char texto[100];
};

int main(){
    struct estrutura e;

    printf("Informe a hora: ");
    scanf("%d", &e.hora);
    printf("Informe os minutos: ");
    scanf("%d", &e.minuto);
    printf("Informe os segundos: ");
    scanf("%d", &e.segundo);

    printf("Informe o dia: ");
    scanf("%d", &e.dia);
    printf("Informe o mês: ");
    scanf("%d", &e.mes);
    printf("Informe o ano: ");
    scanf("%d", &e.ano);

    printf("Escreva seu compromisso: ");
    scanf("%s", e.texto);

    printf("\nCompromisso: %s.\n", e.texto);
    printf("Horário: %d:%d:%d. \n", e.hora, e.minuto, e.segundo);
    printf("Data: %d do mês %d e ano %d. \n", e.dia, e.mes, e.ano);

    return 0;
}