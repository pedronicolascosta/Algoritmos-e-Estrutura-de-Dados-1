//LISTA 01
//EXERCICIO 5
//Este exemplo pede ao usuário que informa a sua idade. Logo após exibe uma mensagem informando se ele é maior ou menor de idade.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	if(idade<18){
		printf("Você é MENOR DE IDADE.");
	}
	else{
		printf("Você é MAIOR DE IDADE.");
	}
	
	return 0;
}
