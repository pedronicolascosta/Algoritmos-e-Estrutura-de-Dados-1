//Atividade 04
//Escreva um programa que calcule a soma dos elementos de uma linha específica (escolhida pelo usuário) em uma matriz 4x4
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[4][4], linha, coluna;

	for(linha=0; linha<4; linha++){
		for(coluna=0; coluna<4; coluna++){
			printf("Digite um valor para a linha %d e coluna %d --> ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\nDigite qual linha você quer acessar: ");
	scanf("%d", &linha);
	
	printf("\nLinha %d da matriz:\n", linha);
	linha--;
	for(coluna=0; coluna<4; coluna++){
		printf("%d | ", matriz[linha][coluna]);
	}	

	return 0;
}
