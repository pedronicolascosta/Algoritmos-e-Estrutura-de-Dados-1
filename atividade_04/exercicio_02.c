//Atividade 04
//Crie um programa que preencha uma matriz 2x2 com o número 1 em todos os seus elementos e depois imprima essa matriz

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[2][2], x, y;
	
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			matriz[x][y] = 1;
		}
	}
	
	printf("\nImpressão do vetor:\n\n");
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			printf("%d | ", matriz[x][y]);
		}
		printf("\n");
	}

	return 0;
}
