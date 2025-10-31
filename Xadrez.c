#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispoRec(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRec(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispoLoops(int casas) {
    for (int v = 0; v < casas; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }
}

void moverCavaloCimaDireita(void) {
    for (int up = 0, right = 0; (up < 2) || (right < 1); ) {
        while (up < 2) {
            printf("Cima\n");
            up++;
            if (up < 2) continue;
        }
        while (right < 1) {
            printf("Direita\n");
            right++;
            break;
        }
        if (up >= 2 && right >= 1) break;
    }
}

int main(void) {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoRec(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Bispo (Loops):\n");
    moverBispoLoops(5);
    printf("\n");

    printf("Movimento do Cavalo (Cima Direita):\n");
    moverCavaloCimaDireita();
    printf("\n");

    return 0;
}
