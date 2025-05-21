all: Programa.o Tabuleiro.o
	@gcc Programa.o Tabuleiro.o -o exe
	@rm -r Programa.o Tabuleiro.o
Programa.o: Programa.c
	@gcc Programa.c -c -lm -Wall
Tabuleiro.o: Tabuleiro.c
	@gcc Tabuleiro.c -c -lm -Wall
run:
	@./exe
val:
	@gcc -g -o exeval Programa.c Tabuleiro.c -Wall -lm
valrun: val
	@valgrind --leak-check=full --track-origins=yes -s ./exeval