#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {
    char opcao;

    printf("Digite uma letra de 'A' a 'H' para o Estado: ");
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

    return 0;
}

