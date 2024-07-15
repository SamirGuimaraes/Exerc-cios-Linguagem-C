/*
Este programa em C funciona como uma calculadora simples. Ele permite que o usuário escolha uma operação matemática 
(adição, subtração, multiplicação ou divisão) e, em seguida, insira dois números para realizar a operação escolhida.
O resultado da operação é exibido na tela. O programa continua executando até que o usuário escolha sair.
*/
#include <stdio.h>

float soma(int num1, int num2){
  return num1 + num2;  
}

float subtracao(int num1, int num2){
  return num1 - num2;
}

float multiplicacao(int num1, int num2){
  return num1 * num2;
}

float divisao(int num1, int num2){
  return num1/num2;  
}

int main(){

  int opcao, num1, num2;
  float resultado;


  do{

    printf("Calculadora \n Escolha uma opção \n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - divisão \n5 - Sair \n => ");
    scanf("%d", &opcao);    
  }while(opcao < 0 || opcao > 5);

    switch(opcao){

    case 1:
      printf("Digite o 1º número: ");
      scanf("%d", &num1);
      printf("Digite o 2º número: ");
      scanf("%d", &num2);
      resultado = soma(num1, num2);

      printf("Resultado: %d + %d = %.2f", num1, num2, resultado);
      break;

    case 2:printf("Digite o 1º número: ");
      scanf("%d", &num1);
      printf("Digite o 2º número: ");
      scanf("%d", &num2);
      resultado = subtracao(num1, num2);

      printf("Resultado: %d - %d = %.2f", num1, num2, resultado);
     break;

    case 3:
      printf("Digite o 1º número: ");
      scanf("%d", &num1);
      printf("Digite o 2º número: ");
      scanf("%d", &num2);
      resultado = multiplicacao(num1, num2);

      printf("Resultado: %d * %d = %2.f", num1, num2, resultado);
     break;

    case 4:
      printf("Digite o 1º número: ");
      scanf("%d", &num1);
      printf("Digite o 2º número: ");
      scanf("%d", &num2);
      while(num2 > num1){
        printf("Um número menor não pode dividir outro número maior. \n");
        printf("Digite o 1º número: ");
        scanf("%d", &num1);
        printf("Digite o 2º número: ");
        scanf("%d", &num2);        
      }
      resultado = divisao(num1, num2);

      printf("Resultado: %d / %d = %2.f", num1, num2, resultado);
      break;

    case 5:
      printf("Nenhum cálculo realizado. \nFim da operação.");
      break;
  }


  return 0;
}