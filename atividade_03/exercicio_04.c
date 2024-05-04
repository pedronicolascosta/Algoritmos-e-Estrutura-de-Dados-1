//Atividade 03
//Faça um programa que leia um vetor de 8 elementos e o imprima na ordem inversa
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[8], i;
	
	for(i=0; i<8; i++){
		printf("Digite um número: \n");
		scanf("%d", &numeros[i]);
	}
	
	printf("Impressão inversa do vetor: \n");
	for(i=7; i>=0; i--){
		printf("%d \n", numeros[i]);
	}
	
	return 0;
}
