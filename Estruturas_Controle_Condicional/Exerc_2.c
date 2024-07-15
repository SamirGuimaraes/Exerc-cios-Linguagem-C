/*
Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e	
escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano	
(não	é	necessário	considerar	o	mês	em	que	ela	nasceu).
*/

#include <stdio.h>
#include <time.h>

int main(){
    int idade, anoNascimento, anoAtual;

    time_t data_ano;
    time(&data_ano);

    struct tm *data = localtime(&data_ano);

    anoAtual = (data->tm_year+1900);    

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade >= 16){
      printf("Por ter 16 anos ou mais  você poderá votar.");
    } else{
      printf("Por ter menos que 16 você não podera votar.");
    }
    return 0;
}