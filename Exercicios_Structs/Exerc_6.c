/*
Este programa em C permite a leitura e armazenamento dos dados de funcionários de uma empresa, incluindo nome, CNPJ, cidade e estado de origem. Primeiramente, solicita ao usuário o número de funcionários da empresa. Em seguida, utiliza estruturas para organizar os dados: a estrutura `localizacao` para armazenar a cidade e estado, e a estrutura `empresa` que incorpora o nome, CNPJ e a estrutura `localizacao`. A função `insercao` é responsável por iterar sobre o número de funcionários inseridos, coletando os dados através de entradas pelo usuário com `scanf`. Após a coleta dos dados, os mesmos são impressos na tela de forma formatada, utilizando um loop `for` para percorrer o vetor de estruturas `empresa` e exibir as informações de cada funcionário. Esse processo permite uma organização eficiente dos dados e uma visualização clara das informações dos funcionários da empresa.
*/
#include <stdio.h>

typedef struct localizacao{
    char cidade[50], estado[50];
} local;

typedef struct empresa{
    char nome[50];
    int cnpj;
    local localizacao;

} empresa;

void insercao(empresa emp[], int num_funcionario){

    for (int i = 0; i < num_funcionario; i++){

        printf("\n");
        printf("Digite o nome do %dº funcionário: ", i+1);
        scanf("%s", &emp[i].nome);
        printf("Digite o cnpj do funcionário: ");
        scanf("%d", &emp[i].cnpj);

        printf("Digite a cidade de origem: ");
        scanf("%s", emp[i].localizacao.cidade);
        printf("Digite o estado de origem: ");
        scanf("%s", emp[i].localizacao.estado);

    }

}

int main() {
    int num_funcionario;

    printf("Quantos funcionários tem na empresa: ");
    scanf("%d", &num_funcionario);

    empresa emp[num_funcionario];

    insercao(emp, num_funcionario);

    printf("\nInformações do funcionarios da empresa. \n");

    for (int i = 0; i < num_funcionario; i++){
        printf("\n--------------------------------");
        printf("\n%dº Funcionário", i+1);
        printf("\nNome: %s", emp[i].nome);
        printf("\nCNPJ: %d", emp[i].cnpj);
        printf("\nCidade de origem: %s", emp[i].localizacao.cidade);
        printf("\nEstado de origem: %s", emp[i].localizacao.estado);
        printf("\n--------------------------------");

    }

    return 0;
}