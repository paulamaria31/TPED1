#include <stdio.h>
#include "tp.h"

int main() {
    Tabuleiro* tabuleiros;
    int t;
    //Lendo a quantidade de tabuleiros
    scanf("%d", &t);
    //Fazendo a alocação dinâmica
    tabuleiros = alocarTabuleiros(t);
    //fazendo a leitura dos tabuleiros
    tabuleiros = lerTabuleiros(tabuleiros, t);
    //imprimirTabuleiros(tabuleiros,t);

    desalocarTabuleiro(tabuleiros);

    return 0;
}
