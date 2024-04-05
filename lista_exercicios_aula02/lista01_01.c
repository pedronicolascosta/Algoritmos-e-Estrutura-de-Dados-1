//LISTA 01
//EXERCICIO 1
//Escreva um programa para calcular o peso ideal de uma pessoa
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char escolha[1];
	
	printf("Calculador de peso ideal \n");
	printf("--Digite 'H' para HOMEM \n");
	printf("--Digite 'M' para MULHER \n");
	scanf("%s", &escolha);
	
	if((escolha == "h" || escolha == "H") || (escolha == "m" || escolha == "M")){
		
		if(escolha == "h" || escolha == "H"){
			printf("Opção escolhida: HOMEM \n");
		}
		else{
			printf("Opção escolhida: MULHER \n");
		}
	}
	else{
		printf("Letra não correspondente. \n");
		printf("Reinicie o programa e digite H ou M. \n");
	}
	
	return 0;
}
