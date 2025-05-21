#include <stdio.h>
#include "tp.h"

struct tabuleiro {
    char** [3][3] letra;
};

Tabuleiro* alocarTabuleiros(int n) {
    Tabuleiro* tabuleiros = (Tabuleiro*) malloc(sizeof(Tabuleiro)*n);
    if (tabuleiros == NULL) {
        printf("Não foi possível criar tabuleiros");
        free(tabuleiros);
        return NULL;
        //fazer funcao para desalocar
    }
    return tabuleiros;
}


