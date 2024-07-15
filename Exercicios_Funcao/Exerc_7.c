/*
Escreva	 um	 programa	 em	 C	 que	 leia	 5	 valores	 inteiros	 positivos ou negativos e	 imprima	 para	
cada	um	o	seu	correspondente	valor	absoluto.
*/

#include <stdio.h>

int valorAbsoluto(int num);

int main(){
  int num[5];

  for (int i = 0; i < 5; i++){
    printf("Digite um valor: ");
    scanf("%d", &num[i]);
    
  }

  for (int i = 0; i < 5; i++){
    printf("O valor absoluto de %d é %d\n", num[i], valorAbsoluto(num[i]));
  }
  
}

int valorAbsoluto(int num){
  if (num < 0){
    return num * -1;
  } else {
    return num;
  }
}

