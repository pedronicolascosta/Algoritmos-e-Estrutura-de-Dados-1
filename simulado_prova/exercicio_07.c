//Simulado
//Exercicio 7
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, linha, coluna;
	
	printf("Digite um número maior que zero: \n");
	scanf("%d", &n);
	
	linha = 1;
	if(n>0){
		while(linha <= n){
			coluna = 1;
			
			while(coluna <= linha){
				printf("%d", linha);
				coluna = coluna + 1;
			}
			
		printf("\n");
		linha = linha + 1;
		}	
	}
	else{
		printf("Número digitado é menor ou igual a zero.");
	}
	
	return 0;
}


