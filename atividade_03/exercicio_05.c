//Atividade 03
//Elabore um programa que conte quantos números pares existem em um vetor de 10 elementos
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[10], pares[10], i, contagem=0;
	
	for(i=0; i<10; i++){
		printf("Digite um número: \n");
		scanf("%d", &numeros[i]);
		
		if(numeros[i] % 2 == 0){
			printf("%d é um número par \n\n", numeros[i]);
			pares[i] = numeros[i];
			contagem++;
		}
	}
	
	printf("Existem %d números pares no vetor", contagem);
	
	return 0;
}
