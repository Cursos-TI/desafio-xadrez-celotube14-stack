#include <stdio.h>

/*
    Programa que simula os movimentos de peças de xadrez:
    Torre, Bispo, Rainha e Cavalo.
    Agora com recursividade (Torre, Bispo, Rainha)
    e loops aninhados complexos (Cavalo).
*/

// ------------------- TORRE -------------------
void moverTorre(int casas, int i) {
    if (i == casas) return;          // Caso base da recursão
    printf("Direita\n");
    moverTorre(casas, i + 1);        // Chamada recursiva
}

// ------------------- BISPO -------------------
// Recursividade (Bispo sobe e vai para a direita)
void moverBispoRecursivo(int casas, int i) {
    if (i == casas) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas, i + 1);
}

// Versão com loops aninhados
void moverBispoLoops(int casas) {
    for (int v = 0; v < casas; v++) {        // Movimento vertical
        for (int h = 0; h < casas; h++) {    // Movimento horizontal
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// ------------------- RAINHA -------------------
void moverRainha(int casas, int i) {
    if (i == casas) return;
    printf("Esquerda\n");
    moverRainha(casas, i + 1);
}

// ------------------- CAVALO -------------------
// Cavalo: duas casas para cima + uma para a direita
void moverCavalo(int movimentos) {
    int contador = 0;

    for (int i = 0; i < movimentos * 2; i++) {
        if (i % 2 == 0) {
            printf("Cima\n");
        } else {
            continue; // ignora movimentos intermediários
        }

        for (int j = 0; j < movimentos; j++) {
            printf("Direita\n");
            contador++;
            if (contador >= movimentos) break; // limite de movimentos
        }
    }
}

// ------------------- MAIN -------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 2;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre, 0);
    printf("\n");

    printf("=== Movimento do Bispo (Recursivo) ===\n");
    moverBispoRecursivo(casasBispo, 0);
    printf("\n");

    printf("=== Movimento do Bispo (Loops Aninhados) ===\n");
    moverBispoLoops(2);
    printf("\n");

    printf("=== Movimento da Rainha ===\n");
    moverRainha(casasRainha, 0);
    printf("\n");

    printf("=== Movimento do Cavalo ===\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}


