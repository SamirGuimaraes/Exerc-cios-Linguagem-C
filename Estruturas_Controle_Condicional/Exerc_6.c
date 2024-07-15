/*
Tendo	 como	 entrada	 a	 altura	 e	 o	 sexo	 (codificado	 da	 seguinte	 forma:	
1:feminino	 	 2:masculino)	 de	 uma	 pessoa,	 construa	 um	 programa	 que	
calcule	e	imprima	seu	peso	ideal,	utilizando	as	seguintes	
Fórmulas:	
- para	homens:	(72.7	*	Altura)	– 58	
- para	mulheres:	(62.1	*	Altura)	– 44.7
*/

#include <stdio.h> 

int main(){
    int sexo;
    float altura, imc;

    do{
        printf("---- Informe seu sexo ----");
        printf("\n1 - Feminino. 2 - Masculino: ");
        scanf("%d", &sexo);
    }while(sexo < 1 || sexo > 3);

    printf("Agora informe sua altura: \nExemplo 1.71: ");
    scanf("%f", &altura);

    switch(sexo){
        case 1:
        imc = (62.1 * altura) - 44.7;
        printf("\nCom uma altura correspondente a %.2f seu peso ideal é de: %.2f.", altura, imc);
        break;

        case 2:
        imc = (72.7 * altura) - 58;
        printf("\nCom uma altura correspondente a %.2f seu peso ideal é de: %.2f", altura, imc);
        break;
    }

    return 0;
}