//Atividade 04
//Faça um programa que troque os valores das linhas 1 e 2 de uma matriz 3x3
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3], x, y, aux[3];
	
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("Digite um valor para a linha %d e coluna %d --> ", x+1,y+1);
			scanf("%d", &matriz[x][y]);
		}
	}
	
	printf("\nVisualização do vetor digitado:\n");
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("%d | ", matriz[x][y]);
		}
		printf("\n");
	}
	
	
	for(y=0; y<3; y++){
		aux[y] = matriz[0][y];
		matriz[0][y] = matriz[1][y];
		matriz[1][y] = aux[y];
	}
	
	printf("\nVisualização do vetor de linhas 1 e 2 trocadas:\n");
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("%d | ", matriz[x][y]);
		}
		printf("\n");
	}

	


	return 0;
}
