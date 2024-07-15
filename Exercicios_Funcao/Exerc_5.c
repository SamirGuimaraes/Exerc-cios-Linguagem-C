/*
Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
*/
#include <stdio.h>

int maior(int num1, int num2){
  if (num1 > num2){
    return num1;
  }else{
    return num2;
  }

}

int main(){
  int num1, num2;

  printf("Insira o primeiro número: ");
  scanf("%d", &num1);

  printf("Insira o segundo número: ");
  scanf("%d", &num2);

  printf("O maior número dos digitados corresponde a: %d", maior(num1, num2));
}