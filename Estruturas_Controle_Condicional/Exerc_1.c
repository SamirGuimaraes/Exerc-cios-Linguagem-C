/*
Escreva	 um	 programa	 para	 ler	 2	 valores	 (considere	 que	 	 não	 serão	
informados	valores	iguais)	e	escrever	o	maior	deles.
*/

#include <stdio.h>
int main(){
  int num1, num2;

  printf("Digite um número inteiro: ");
  scanf("%d", &num1);

  printf("Digite um número inteiro: ");
  scanf("%d", &num2);

  while(num2 == num1){
    printf("Digite um número diferente do primeiro: ");
    scanf("%d", &num2);
  }

  if (num1 > num2){
    printf("\nO valor %d é maior que o valor %d.", num1, num2);
  } else{
    printf("\nO valor %d é maior que o valor %d.", num2, num1);
  }

  return 0;
}