#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "tp.h"

struct tabuleiro {
    char letra[3][3];
};

Tabuleiro* alocarTabuleiros(int t) {
    Tabuleiro* tabuleiros = (Tabuleiro*) malloc(sizeof(Tabuleiro)*t);
    if (tabuleiros == NULL) {
        printf("Não foi possível criar tabuleiros");
        desalocarTabuleiro(tabuleiros);
        return NULL;
        //fazer funcao para desalocar
    }
    return tabuleiros;
}

void desalocarTabuleiro(Tabuleiro* tabuleiros) {
    if (tabuleiros == NULL) {
        printf("Não há nada para desalocar");
    }
    free(tabuleiros);
    tabuleiros = NULL;
}

Tabuleiro* lerTabuleiros(Tabuleiro* tabuleiros, int t) {
    char sequencia[10];
    if (tabuleiros == NULL || t == 0) {
        printf("Não é possível ler os tabuleiros");
        return NULL;
    }
    for (int c = 0; c < t; c++) {
        __fpurge(stdin);
        fgets(sequencia, sizeof(sequencia), stdin);
        sequencia[strcspn(sequencia, "\n")] = 0;

        int d = 0;
        for (int n = 0; n < 3; n++) {
            for (int m = 0; m < 3; m++) {
                    tabuleiros[c].letra[n][m] = sequencia[d++];
            }
        }
    }
    return tabuleiros;
}

void imprimirTabuleiros(Tabuleiro* tabuleiros, int t) {
    for (int c = 0; c < t; c++) {
        printf("Tabuleiro %d:\n", c+1);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%c ", tabuleiros[c].letra[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}





