/*
Desenvolver um algoritmo que leia os coeficientes (a , b e c) de uma equação do segundo grau e calcule suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a classificação das raízes.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float delta, raiz1, raiz2;

    printf("Digite os coeficientes A, B e C da equação de segundo grau:\n");
    printf("Coeficiente A: ");
    scanf("%d", &a);
    printf("Coeficiente B: ");
    scanf("%d", &b);
    printf("Coeficiente C: ");
    scanf("%d", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("Com um discriminante menor que 0, não existem raízes reais.\n");
    } else if (delta == 0) {
        raiz1 = -b / (2.0 * a);
        printf("Com um discriminante igual a 0, as raízes são iguais:\n");
        printf("Raiz única: %.2f\n", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2.0 * a);
        raiz2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Com um discriminante maior que 0, as raízes são distintas:\n");
        printf("Raiz 1: %.2f\n", raiz1);
        printf("Raiz 2: %.2f\n", raiz2);
    }

    return 0;
}
