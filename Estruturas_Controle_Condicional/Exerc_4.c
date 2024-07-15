/*
As	maçãs	 custam	 R$	 0,30	 cada	 se	 forem	 compradas	menos	 do	 que	 uma	
dúzia,	 e	 R$	 0,25	 se	 forem	 compradas	 pelo	 menos	 doze.	 Escreva	 um	
programa	 que	 leia	 o	 número	 de	 maçãs	 compradas,	 calcule	 e	 escreva	 o	
valor	total	da	compra.
*/

#include <stdio.h>
int main(){
  int numMacas;
  float preco;

  printf("Quantas maças você que comprar: ");
  scanf("%d", &numMacas);

  if (numMacas < 12){
      preco = numMacas * 0.30;
      printf("O preço total comprando menos que uma dúzia será de: R$%.2f", preco);
  } else{
      preco = numMacas * 0.25;
      printf("O preço total comprando maios que uma dúzia será de R$%.2f", preco);
  }

  return 0;
}