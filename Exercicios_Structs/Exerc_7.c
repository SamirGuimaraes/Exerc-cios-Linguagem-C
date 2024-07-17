// Este programa em C lê dados de até 5 carros, incluindo marca (até 15 caracteres), ano e preço. Após a inserção dos dados, solicita ao usuário um valor 'p' e exibe todas as informações dos carros cujo preço é menor ou igual a 'p'. O processo é repetido até que o usuário decida parar de inserir valores.

#include <stdio.h>
#define MAX 5

typedef struct carros {
    char marca[15];
    int ano, preco;
} carros;

void insercao(carros car[MAX]){

    for (int i = 0; i < MAX; i++){

        printf("Digite a marca do %dº carro: ", i+1);
        scanf("%s", car[i].marca);
        printf("Digite o ano do %dº carro: ", i+1);
        scanf("%d", &car[i].ano);
        printf("Digite o preço do %dº carro: ", i+1);
        scanf("%d", &car[i].preco);
        printf("\n");
    }

}

int main(){
    carros car[MAX];

    int valor_p;
    insercao(car);

    printf("Digite um valor que esteja disposto a pagar em um carro: ");
    scanf("%d", &valor_p);

    printf("\nEsses são os carros que talvez você se interesse: \n");
    for (int i = 0; i < MAX; i++){
        if (car[i].preco <= valor_p){
            printf("Marca: %s\n", car[i].marca);
            printf("Ano: %d\n", car[i].ano);
            printf("Preço: %d\n", car[i].preco);
            printf("\n");
        }

    }
}