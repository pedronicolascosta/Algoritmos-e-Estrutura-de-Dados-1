//Atividade 04
//Crie um programa que preencha uma matriz 2x2 com o número 1 em todos os seus elementos de indice par e 0 nos de indice ímpar e depois imprima essa matriz

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[2][2], x, y;
	
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			if(x%2==0 && y%2==0){
				matriz[x][y] = 1;
			}
			else{
				matriz[x][y] = 0;
			}
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
