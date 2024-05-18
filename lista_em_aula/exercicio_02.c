//Faça um programa que construa e imprima um vetor de tamanho 10, coloque em cada posição o valor de i^2 invertido
//Autor: Pedro Nicolas Costa 

#include <stdio.h>
#include <math.h>

int main(){
	int vetor[10], i, x=9;
	
	for(i=0; i<10; i++){
		vetor[i] = pow(x, 2);
		x--;
		printf("%d \n", vetor[i]);
	}
	
	return 0;
}
