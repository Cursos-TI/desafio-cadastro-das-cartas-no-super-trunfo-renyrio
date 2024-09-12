#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {
    char Estado;
    char Código da carta;
    char Nome da cidade [50];
    int População;
    float Área;
    float PIB;
    int Número de pontos turísticos;
    float Densidade populacional;
    float PIB per capta;
    float Super poder;

    printf("Digite o Estado escolhendo uma letra de 'A' a 'H': ");
    scanf(" %c", &opcao);

    // Verifica se o caractere está entre 'A' e 'H'
    if (opcao >= 'A' && opcao <= 'H') {
        switch (opcao) {
            case 'A':
                printf("Você escolheu a letra 'A'\n");
                break;
            case 'B':
                printf("Você escolheu a letra 'B'\n");
                break;
            case 'C':
                printf("Você escolheu a letra 'C'\n");
                break;
            case 'D':
                printf("Você escolheu a letra 'D'\n");
                break;
            case 'E':
                printf("Você escolheu a letra 'E'\n");
                break;
            case 'F':
                printf("Você escolheu a letra 'F'\n");
                break;
            case 'G':
                printf("Você escolheu a letra 'G'\n");
                break;
            case 'H':
                printf("Você escolheu a letra 'H'\n");
                break;
        }
    } else {
        printf("Letra inválida! Por favor, insira uma letra entre 'A' e 'H'.\n");
    }
        printf("Digite o Código da carta: \n");
        scanf(" %s", &codigodacarta);

        printf("Digite o Nome da cidade: \n");
        scanf(" %s", &nomedacidade);

        printf("Digite a População: \n");
        scanf(" %.2f", &populacao);

        printf("Digite a Área: \n");
        scanf(" %.2f km2", & nome);

        printf("Digite o PIB: \n");
        scanf(" %.2f reais", & nome);

        printf("Digite o Número de pontos turísticos: \n");
        scanf(" %d", & nome);
    return 0;
}

