/* 
Este código implementa uma agenda de compromissos utilizando uma lista simplesmente encadeada em C. 
Cada compromisso é armazenado em uma estrutura chamada 'agenda', que contém informações como 
dia, mês, ano, descrição e uma chave única de identificação. A lista começa vazia e novos 
compromissos podem ser adicionados dinamicamente. A função 'inicializar' configura o início 
da lista, enquanto 'lista_vazia' verifica se há compromissos cadastrados. A função 'insercao_compromissos' 
solicita ao usuário os detalhes do compromisso, realiza validações e insere o novo compromisso na lista. 
A função 'impressao_compromissos' percorre a lista e exibe todos os compromissos cadastrados. 
O programa principal oferece um menu de opções para o usuário interagir com a agenda.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_COMPROMISSOS 100

// Definição da estrutura agenda
typedef struct agenda{
  int dia, mes, ano, chave;
  char descricao[100];
  struct agenda *prox; // Ponteiro para o próximo elemento da lista
} agenda;

agenda *inicioL; // Ponteiro global para o início da lista

// Função para inicializar a lista (configurar ponteiro para NULL)
void inicializar(){
  inicioL = NULL;
}

// Função para verificar se a lista está vazia
int lista_vazia(){
  return (inicioL == NULL);
}

// Função para inserir compromissos na lista
void insercao_compromissos(int qtde_compromissos) {
    getchar(); // Para consumir o newline restante do scanf

    // Aloca memória para um novo compromisso
    agenda *novo = (agenda*) malloc(sizeof(agenda));
    if (novo == NULL) { // Verificação de alocação
        printf("Erro ao alocar memória.\n");
        return;
    }

    novo->prox = NULL; // Inicializa o ponteiro próximo como NULL

    // Recebe a descrição do compromisso
    printf("Escreva brevemente seu compromisso: ");
    fgets(novo->descricao, sizeof(novo->descricao), stdin);
    novo->descricao[strcspn(novo->descricao, "\n")] = '\0'; // Remove o newline

    // Validação do dia
    char dia_data[50];
    int validacao_dia = -1;
    while (validacao_dia < 1 || validacao_dia > 31) {
        printf("\nEscreva o dia de entrega do compromisso: ");
        fgets(dia_data, sizeof(dia_data), stdin);
        if (sscanf(dia_data, "%d", &validacao_dia) != 1 || validacao_dia < 1 || validacao_dia > 31) {
            printf("\nEsse não é um dia válido.");
            validacao_dia = -1;
        }
    }
    novo->dia = validacao_dia; // Atribui o dia ao compromisso

    // Validação do mês
    char mes_data[50];
    int validacao_mes = -1;
    while (validacao_mes < 1 || validacao_mes > 12) {
        printf("\nEscreva o mês de entrega do compromisso: ");
        fgets(mes_data, sizeof(mes_data), stdin);
        if (sscanf(mes_data, "%d", &validacao_mes) != 1 || validacao_mes < 1 || validacao_mes > 12) {
            printf("\nEsse não é um mês válido.");
            validacao_mes = -1;
        }
    }
    novo->mes = validacao_mes; // Atribui o mês ao compromisso

    // Validação do ano
    char ano_data[50];
    int validacao_ano = -1;
    while (validacao_ano < 1001 || validacao_ano > 9999) {
        printf("\nEscreva o ano de entrega do compromisso: ");
        fgets(ano_data, sizeof(ano_data), stdin);
        if (sscanf(ano_data, "%d", &validacao_ano) != 1 || validacao_ano < 1001 || validacao_ano > 9999) {
            printf("\nEsse não é um ano válido.");
            validacao_ano = -1;
        }
    }
    novo->ano = validacao_ano; // Atribui o ano ao compromisso

    // Validação da chave única
    char chave_identificadora[50];
    int chave_unica;
    int validador;
    do {
        printf("\nEscreva uma chave única para este compromisso: ");
        fgets(chave_identificadora, sizeof(chave_identificadora), stdin);
        if (sscanf(chave_identificadora, "%d", &chave_unica) != 1) {
            printf("\nChave inválida.");
            validador = 1;
        } else {
            validador = 0;
            agenda *aux = inicioL;
            while (aux != NULL) {
                if (chave_unica == aux->chave) {
                    printf("\nChave já existente.");
                    validador = 1;
                    break;
                }
                aux = aux->prox;
            }
        }
    } while (validador == 1);
    novo->chave = chave_unica; // Atribui a chave ao compromisso

    // Inserção do novo compromisso na lista
    if (lista_vazia()) {
        inicioL = novo; // Insere como primeiro elemento se a lista estiver vazia
    } else {
        agenda *aux = inicioL;
        while (aux->prox != NULL) {
            aux = aux->prox; // Percorre a lista até o final
        }
        aux->prox = novo; // Adiciona no final da lista
    }
}

// Função para imprimir os compromissos
void impressao_compromissos(){
  if (!lista_vazia()){
    agenda *aux = inicioL; // Ponteiro auxiliar para percorrer a lista
    while(aux != NULL){
      printf("==============================\n");
      printf("Chave de Identificação: %d\n", aux->chave);
      printf("Compromisso: %s\n", aux->descricao);
      printf("Data de entrega: %d/%d/%d\n", aux->dia, aux->mes, aux->ano);
      printf("==============================\n");
      aux = aux->prox; // Avança para o próximo elemento da lista
    }    
  } else {
    printf("Não há compromissos cadastrados.\n");
  }
}

int main() {
    int opcao, qtde_compromisso = 0;
    inicializar(); // Inicializa a lista

    do {
        // Menu de opções
        printf("--------------------------------------------------\n");
        printf("Escolha a opção e digite o número correspondente\n");
        printf("1 - Inserir compromisso na Agenda\n");
        printf("2 - Imprimir os compromissos inseridos\n");
        printf("3 - Visualizar as chaves identificadoras\n");
        printf("0 - Sair da Agenda\n");
        printf("--------------------------------------------------\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        // Processamento da opção escolhida
        switch (opcao) {
            case 1:
                if (qtde_compromisso < MAX_COMPROMISSOS) {
                    insercao_compromissos(qtde_compromisso); // Insere um novo compromisso
                    qtde_compromisso++;
                } else {
                    printf("A agenda está cheia. Não é possível adicionar mais compromissos.\n");
                }
                break;

            case 2:
                impressao_compromissos(); // Imprime todos os compromissos
                break;

            default:
                printf("Para inserir um compromisso digite 1.\n");
                printf("Para imprimir os compromissos inseridos digite 2.\n");
                printf("Inicie novamente o programa para sair.\n");
                break;
        }

    } while (opcao != 0); // Repete até que a opção seja 0 (sair)

    return 0;
}
