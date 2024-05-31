//Atividade 04
//Crie um programa que leia e armazene os valores em uma matriz 3x3. Em seguida, imprima todos os elementos da matriz

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
	
	printf("\nImpressão do vetor:\n\n");
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<3; coluna++){
			printf("| %d | ", matriz[linha][coluna]);
		}
		printf("\n");
	}

	return 0;
}
