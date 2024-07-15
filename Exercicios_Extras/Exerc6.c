/*
Desenvolver um algoritmo com as opções de calcular e imprimir o volume e a área da superfície de um cone reto, um cilindro ou uma esfera. O algoritmo deverá ler a opção da figura desejada (cone / cilindro / esfera) e de acordo com a opção escolhida calcular o volume e a área da superfície da figura pedida. Fórmulas:
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main() {
    float r, l, volume, area;

    int opcao;
    do {
        printf("Qual figura você deseja calcular a área:\n");
        printf("1 - Cone\n2 - Cilindro\n3 - Esfera\n");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 3);

    switch (opcao) {
        case 1:
            printf("\nQual o raio do cone: ");
            scanf("%f", &r);

            printf("Qual a altura do cone: ");
            scanf("%f", &l);

            volume = (1.0/3.0) * PI * r * r * l;
            area = PI * r * (r + sqrt(r * r + l * l));
            printf("\nO volume do cone é: %.2f\n", volume);
            printf("A área da superfície do cone é: %.2f\n", area);
            break;

        case 2:
            printf("\nQual o raio do cilindro: ");
            scanf("%f", &r);

            printf("Qual a altura do cilindro: ");
            scanf("%f", &l);

            volume = PI * r * r * l;
            area = 2.0 * PI * r * (r + l);
            printf("\nO volume do cilindro é: %.2f\n", volume);
            printf("A área da superfície do cilindro é: %.2f\n", area);
            break;

        case 3:
            printf("\nQual o raio da esfera: ");
            scanf("%f", &r);

            volume = (4.0/3.0) * PI * r * r * r;
            area = 4.0 * PI * r * r;
            printf("\nO volume da esfera é: %.2f\n", volume);
            printf("A área da superfície da esfera é: %.2f\n", area);
            break;
    }

    return 0;
}
