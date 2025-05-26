#ifndef tp_h
#define tp_h
#define x "X"
#define o "O"
#define v "v"

typedef struct tabuleiro Tabuleiro;

Tabuleiro* alocarTabuleiros(int t);

void desalocarTabuleiro(Tabuleiro* tabuleiros);

Tabuleiro* lerTabuleiros(Tabuleiro* tabuleiros, int t);

void imprimirTabuleiros(Tabuleiro* tabuleiros, int t);

#endif