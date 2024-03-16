//Exemplo 20
//Programa que recebe do usuário um nome digitado e exibe o resultado na tela.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[61];
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	printf("Seja bem vindo(a) %s!", nome);
	
	return 0;
}
