#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

//definição de variaveis
    
    char letra_estado;
    char numero_cidade;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    
    // Cadastro das informações
    
    printf("==== CADASTRO DE CARTAS ==== \n");
    printf("Informe o estado: \n");
    scanf(" %c",&letra_estado);

    printf("Informe o número da cidade: \n");
    scanf(" %c",& numero_cidade);

    printf("Informe a população da cidade: \n");
    scanf("%d",&populacao);

    printf("Informe a área da cidade: \n");
    scanf("%f",&area);

    printf("Informe o PIB da cidade: \n");
    scanf("%f",&pib);

    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d",&pontos_turisticos);

      
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Parabéns! o cadastro foi efetuado com sucesso! \n");
    printf("Veja as informações cadastradas: \n");

    printf("Código da cidade: %c%c \n", letra_estado, numero_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.3f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d \n", pontos_turisticos);



    return 0;
}
