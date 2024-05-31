//Atividade 04
//Crie um programa que preencha uma matriz 3x2 com o número 0 em todos os seus elementos e depois imprima essa matriz

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][2], x, y;
	
	for(x=0; x<3; x++){
		for(y=0; y<2; y++){
			matriz[x][y] = 0;
		}
	}
	
	printf("\nImpressão do vetor:\n\n");
	for(x=0; x<3; x++){
		for(y=0; y<2; y++){
			printf("%d | ", matriz[x][y]);
		}
		printf("\n");
	}

	return 0;
}
