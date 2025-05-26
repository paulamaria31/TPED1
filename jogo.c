#include <stdio.h>
#include "tp.h"

int main() {
    Tabuleiro* tabuleiros;
    int n;
    //Lendo a quantidade de tabuleiros
    scanf("%d", &n);
    //Fazendo a alocação dinâmica
    tabuleiros = alocarTabuleiros(n);
    //fazendo a leitura dos tabuleiros
    tabuleiros = lerTabuleiros(tabuleiros, n);

    desalocarTabuleiro(tabuleiros);

    return 0;
}
