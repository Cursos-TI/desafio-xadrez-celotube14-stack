#include <stdio.h>

/*
    Programa que simula os movimentos de peças de xadrez:
    Torre, Bispo, Rainha e Cavalo.
    Cada peça utiliza estruturas de repetição diferentes para demonstrar seus movimentos.
*/

int main() {
    int i, j;

    // ------------------------------
    // Movimento da Torre (usando for)
    // ------------------------------
    printf("Movimento da Torre:\n");
    for (i = 0; i < 3; i++) {
        printf("Direita\n");
    }

    // ------------------------------
    // Movimento do Bispo (usando while)
    // ------------------------------
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < 3) {
        printf("Diagonal Superior Direita\n");
        i++;
    }

    // ------------------------------
    // Movimento da Rainha (usando do-while)
    // ------------------------------
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Cima\n");
        i++;
    } while (i < 3);

    // ------------------------------
    // Movimento do Cavalo
    // ------------------------------
    /*
        O Cavalo se move em "L":
        Neste caso: 2 casas para baixo e 1 para a esquerda.
        Deve ser implementado com loops aninhados:
        - O loop externo será um for.
        - O loop interno será um while.
    */

    printf("\nMovimento do Cavalo:\n");

    int casasBaixo = 2;     // Número de casas para baixo
    int casasEsquerda = 1;  // Número de casas para esquerda

    // Loop externo (for) -> controla os movimentos "para baixo"
    for (i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) -> controla o movimento "para a esquerda"
    j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}


