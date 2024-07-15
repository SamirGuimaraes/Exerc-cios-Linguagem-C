/*
Um certo aço é classificado de acordo com o resultado de três testes abaixo, que devem determinar se o mesmo satisfaz as especificações:
1. Conteúdo de Carbono abaixo de 7;
2. Dureza Rockwell maior do que 50;
3. Resistência á tração maior do que 80.000 psi;
*/

#include <stdio.h>

int main() {
    int carbono, dureza;
    float resistencia;

    printf("Qual a quantidade de carbono presente no metal: \n");
    scanf("%d", &carbono);

    printf("Qual a dureza do metal em análise: \n");
    scanf("%d", &dureza);

    printf("E por último qual a resistência á tração do metal em psi: \n");
    scanf("%f", &resistencia);

    if (carbono >= 7 && dureza > 50 && resistencia > 80.000){
        printf("O metal em análise satisfaz as específicações.");
    } else{
        printf("O metal em análise não satifaz as especificações.");
    }


    return 0;
}
