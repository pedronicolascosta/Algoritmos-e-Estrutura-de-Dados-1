//Exemplo 23
//Exemplo que imprime um valor armazenado em uma variável inteira, além disso, temos dois elementos novos, o clrscr() e o getch(), que pertencem a biblioteca conio.h
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>
#include <conio.h> //necessario para as funcoes clrscr e getch

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Contador;
	int NroDeFilhos;
	
	Contador = 10;
	printf("Valor da variável: %d \n", Contador);
	
	NroDeFilhos = 3;
	printf("Maria tem %d filhos", NroDeFilhos);
	
	getch(); //espera que o usuario pressione uma tecla
	
	//clrscr(); //limpa a tela
}
