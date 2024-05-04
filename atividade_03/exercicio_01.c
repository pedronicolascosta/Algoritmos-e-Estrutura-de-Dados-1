//Atividade 03
//Crie um programa que leia 10 números inteiros e os armazene em um vetor. Em seguida, imprima todos os elementos do vetor.

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[10], i=0;
	
	for(i=0; i<=9; i++){
		printf("Digite um número: \n");
		scanf("%d", &numeros[i]);
	}
	
	printf("Os números digitados foram: \n");
	
	for(i=0; i<=9; i++){
		printf("%d \n", numeros[i]);
	}

	return 0;
}
