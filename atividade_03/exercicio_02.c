//Atividade 03
//Desenvolva um programa que encontre o maior e o menor valor armazenado em um vetor de 15 elementos
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[15], i=0, maior=0, menor=0;
	
	for(i=0; i<15; i++){
		printf("Digite um número: \n");
		scanf("%d", &numeros[i]);
	}
	
	for(i=0; i<15; i++){
		if(numeros[i] > maior){
			maior = numeros[i];
		}
	}
	
	menor = maior;
	
	for(i=0; i<15; i++){
		if(numeros[i] < menor){
			menor = numeros[i];
		}
	}
	
	printf("O MAIOR número do vetor é %d \n", maior);
	printf("O menor número do vetor é %d \n", menor);

	return 0;
}
