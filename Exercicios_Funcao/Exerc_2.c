/*
Crie um programa que receba um número inteiro e uma função que retorne 1 se o número digitado for positivo, ou retorne 0 (zero) caso o número seja negativo.
*/
#include <stdio.h>

int verificador(int num){
  if (num > 0){
    return 1;
  } else{
    return 0;
  }
  
}

int main(){
  int num;

  printf("Insira um número para saber se é positivo ou negativo: ");
  scanf("%d", &num);
  

  if (verificador(num) == 1){
    printf("O número é positivo.");
  } else{
    printf("O número é negativo.");
  }

  return 0;
}