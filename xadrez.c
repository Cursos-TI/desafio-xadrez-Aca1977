#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Movimentação da Torre (usndo FOR)
    int i; //variável de controle do loop
    int casasTorre = 5; //número de casas para mover a torre
    
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); //torre vai sempre em linha reta para a direita
    }

    printf("\n");

    // Movimento do Bispo (usando while)
    int j = 1; //variável de controle do loop
    int casasBispo = 5; //número de casas para mover o bispo

    printf("Movimento do Bispo:\n");
    while (j <= casasBispo)
    {
        printf("Cima Direita\n");//bispo vai sempre na diagonal (cima + direita)
        j++;
    }

    printf("\n");

    // Movimento da Rainha (usando DO-WHILE)
    int k = 1; //variável de controle do loop
    int casasRainha = 8; //rainha vai sempre em linha reta para a esquerda
    printf("Movimento da Rainha:\n");
    do{
        printf("Esquerd\n"); //rainha vai sempre em linha reta para a esquerda
        k++;
    } while (k <= casasRainha);
  
    

    return 0;
}
