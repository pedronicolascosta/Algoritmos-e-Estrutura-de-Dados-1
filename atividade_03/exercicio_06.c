//Atividade 03
//Crie um programa que copie os dados de um vetor 'A[10]' para um vetor 'B[10]' e imprima o vetor 'B'
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A[10], B[10], i;
	
	printf("Digite os valores para o vetor A: \n");
	for(i=0; i<10; i++){
		printf("Digite um número: \n");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<10; i++){
		B[i] = A[i];
	}
	
	
	
	
	
	
	printf("Existem %d números pares no vetor", contagem);
	
	return 0;
}
