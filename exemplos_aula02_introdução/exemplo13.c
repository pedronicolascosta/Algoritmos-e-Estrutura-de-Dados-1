//Exemplo 13
//Algoritmo (Programa) que soma dois números exibe o resultado na tela
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroX=0, numeroY=0;
	
	printf("\nDigite o primeiro número: ");
	scanf("%d", &numeroX);
	
	printf("\nDigite o segundo número: ");
	scanf("%d", &numeroY);
	
	printf("\nA SOMA É IGUAL À = %d", numeroX + numeroY);
	//AQUI, a soma foi feita diretamente na linha de impressão, sem precisar de uma terceira variável para armazenar o valor da soma.

	return 0;
}
