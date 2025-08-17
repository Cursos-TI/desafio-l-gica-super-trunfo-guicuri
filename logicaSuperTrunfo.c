#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int  populacao, pontos_turisticos, populacao2, pontos_turisticos2;
    float  area, pib, area2, pib2, densidade_populacional, densidade_populacional2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Insira os seguintes atributos da Cidade 1: \n");
    printf("População: ");
    scanf("%i", &populacao);
    printf("Pontos turísticos: ");
	scanf("%i", &pontos_turisticos);
	printf("Area: ");
	scanf("%f", &area);
	printf("PIB: ");
	scanf("%f", &pib);

    printf("\nInsira os seguintes atributos da Cidade 2: \n");
    printf("População: ");
    scanf("%i", &populacao2);
    printf("Pontos turísticos: ");
	scanf("%i", &pontos_turisticos2);
	printf("Area: ");
	scanf("%f", &area2);
	printf("PIB: ");
	scanf("%f", &pib2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    densidade_populacional = populacao / area;
    densidade_populacional2 = populacao2 / area2;

    if (populacao > populacao2)
    {
        printf("\nCidade 1 tem maior população.\n");
    } 
    else
    {
        printf("\nCidade 2 tem maior população.\n");
    }

    if (area > area2)
    {
        printf("Cidade 1 tem uma area maior.\n");
    } 
    else
    {
        printf("Cidade 2 tem uma area maior.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if (densidade_populacional < densidade_populacional2)
    {
        printf("\nA cidade 1 venceu, pois sua densidade populacional é menor.\n");
    }
    else
    {
        printf("\nA cidade 2 venceu, pois sua densidade populacional é menor.\n");
    }

    return 0;
}
