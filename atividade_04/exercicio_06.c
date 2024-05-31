//Atividade 04
//Desenvolva um programa que leia uma matriz 3x3 e imprima cada linha e cada coluna separadamente

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3], linha, coluna;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			printf("Digite um valor para a linha %d e coluna %d --> ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\nImpressão das LINHAS do vetor:\n\n");
	for(linha=0; linha<3; linha++){
		printf("Linha %d: ", linha+1);
		for(coluna=0; coluna<3; coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n\n");
	}
	
	printf("\nImpressão das COLUNAS do vetor:\n\n");
	for(coluna=0; coluna<3; coluna++){
		printf("Coluna %d:\n", coluna+1);
		for(linha=0; linha<3; linha++){
			printf("%d", matriz[linha][coluna]);
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
