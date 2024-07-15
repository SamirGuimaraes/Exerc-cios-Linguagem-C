/*
Escreva	um	programa	que	leia	5	números	inteiros	positivos	(utilize	uma	
função	 que	 leia	 esse	 número	 e	 verifique	 se	 ele	 é	 positivo).	 Para	 cada	
número	informado	escrever	a	soma	de	seus	divisores	(exceto	ele	mesmo).	
Utilize	a	função	SomaDivisores para		obter	a soma.	
Nome:	SomaDivisores	
Descrição:	Calcula	a	soma	dos	divisores	do	número	informado	(exceto	
ele	mesmo).	
Entrada:	Um	número	inteiro	e	positivo.	
Saída:	A	soma	dos	divisores.	
Exemplo:	Para	o	valor	8:	1+2+4	=	7
*/

#include <stdio.h>


int leitura(int num[5]){ // Função que lê os números.
  for (int i = 0; i < 5; i++){
    printf("Digite um número: ");
    scanf("%d", &num[i]);
    if (num[i] < 0){
      num[i] = -num[i];     
    }
  }
}

int somaDivisores(int num){ // Função que calcula a soma dos divisores inteiros.  
  int soma = 0;
  if (num == 1){
    return 1;
  }else{
    for (int i = 1; i <= num-1; i++){
      if (num % i == 0){
        soma += i;
      }
    }
  }

  return soma;
}

int main(){

  //printf(leitura(num[5])); // Chamando a função leitura

  int num[5]; //Declarando o vetor de inteiros
  leitura(num); //Chamando a função leitura para ler os valores

  for (int i = 0; i < 5; i++){
    printf("A soma dos divisores de %d é %d\n", num[i], somaDivisores(num[i]));
  }

}