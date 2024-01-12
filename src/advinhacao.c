#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numerosecreto = rand() % 100;
    int chute;
    int tentativas = 1;
    double pontos = 100;

    printf("******************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("******************************************\n");

    while (1) {
        printf("tentativa %d\n", tentativas);
        printf("Qual é o seu chute?\n ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }

        if (chute == numerosecreto) {
            printf("Parabéns! Você acertou\n");
            printf("Jogue novamente!\n");
            break;
        } else if (chute > numerosecreto) {
            printf("O seu chute foi maior que o número secreto\n");
        } else {
            printf("Seu chute foi menor que o número secreto\n");
        }
        
        tentativas++;
        double pontosPerdidos = abs(chute - numerosecreto) / 2.0;
        pontos -= pontosPerdidos;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas\n", tentativas);
    printf("A sua pontuação foi de %.1f", pontos);

    return 0;
}