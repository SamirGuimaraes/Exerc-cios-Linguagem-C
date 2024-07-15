/*
Escreva	 uma	 função	 potencia(base,	 expoente) que	 quando	 chamada,	
retorna	base elevado pelo expoente.	Por	exemplo,	potencia(3,	4)	deve	retornar	81.	Assuma	
que	expoente	é um	inteiro	maior ou	igual	a	1
  */

#include <stdio.h> 
#include <math.h>

int expoente(int potencia, int base);

int main(){
  int potencia, base, resultado;

  printf("Digite o número que será a potencia: ");
  scanf("%d", &potencia);
  while (potencia < 1){
    printf("Digite um número maior ou igual a 1: ");
    scanf("%d", &potencia);
  }

  printf("Digite o número que será a base: ");
  scanf("%d", &base);

  resultado = expoente(potencia, base);
  printf("Com uma base %d e uma potencia %d, o resultado é %d", base, potencia, resultado);

  return 0;
}

int expoente(int potencia, int base){
  return pow(base, potencia);
}