/*
Este programa calcula o volume e a área da superfície de um cone reto, cilindro ou esfera, conforme escolha do usuário.
Primeiro, o usuário seleciona a figura desejada (1 para Cone, 2 para Cilindro, 3 para Esfera).
Em seguida, dependendo da opção escolhida, o usuário fornece os dados necessários como raio e altura.
O programa utiliza fórmulas matemáticas específicas para cada figura geométrica:
 - Cone: Calcula o volume e a área da superfície usando a altura e o raio da base.
 - Cilindro: Calcula o volume e a área da superfície usando o raio da base e a altura.
 - Esfera: Calcula o volume e a área da superfície usando apenas o raio.
*/


#include <stdio.h>

int main() {
    int contaCliente, tipoCliente;
    float consumoAgua, total;

    printf("Digite o número da sua conta: ");
    scanf("%d", &contaCliente);

    do {
        printf("Agora digite qual tipo de consumidor você é:\n");
        printf("1 - Residencial\n2 - Comercial\n3 - Industrial\n");
        scanf("%d", &tipoCliente);
    } while (tipoCliente < 1 || tipoCliente > 3);

    printf("Digite a quantidade de m³ de água gastos mensalmente: ");
    scanf("%f", &consumoAgua);

    switch (tipoCliente) {
        case 1:
            total = 5.0 + (0.05 * consumoAgua);
            printf("Conta: %d - Preço a pagar: R$ %.2f\n", contaCliente, total);
            break;
        case 2:
            if (consumoAgua <= 80)
                total = 500.0;
            else
                total = 500.0 + (0.25 * (consumoAgua - 80));
            printf("Conta: %d - Preço a pagar: R$ %.2f\n", contaCliente, total);
            break;
        case 3:
            if (consumoAgua <= 100)
                total = 800.0;
            else
                total = 800.0 + (0.04 * (consumoAgua - 100));
            printf("Conta: %d - Preço a pagar: R$ %.2f\n", contaCliente, total);
            break;
    }

    return 0;
}