/*
Faça um programa que receba o número de horas trabalhadas por um gestor e o valor do salário mínimo vigente. Cria uma função que calcule o salário a receber do gestor, segundo as regras abaixo:

I - A hora trabalhada vale a metade do salário mínimo;
II - O salário bruto equivale ao número de horas trabalhadas multiplicadp pelo valor da hora trabalhada;
III - O imposto equivale a 3% do salário bruto;
IV - O salário a receber equivale ao salário bruto menos o imposto;

Crie um algortimo que invoque a respectiva função e mostre o salário a receber. 
*/

// Online C compiler to run C program onl
#include <stdio.h>

float calcularSalario(float salarioMin, float horas);

float salarioFinal(float salarioBruto);

#include <stdio.h>

int main(){
    float salarioMin, horas, salarioBruto;

    printf("Informe o salário mínimo da empresa: ");
    scanf("%f", &salarioMin);
    printf("Agora informe a suas horas trabalhadas: ");
    scanf("%f", &horas);

    salarioBruto = calcularSalario(salarioMin, horas);

    printf("Salário a receber: %3.f", salarioFinal(salarioBruto));

  return 0;
}

float calcularSalario(float salarioMin, float horas){
    return (horas * (salarioMin/2)) + salarioMin;
}

float salarioFinal(float salarioBruto){
    float imposto = 0.03;

    return salarioBruto * (1.0 - imposto);

}