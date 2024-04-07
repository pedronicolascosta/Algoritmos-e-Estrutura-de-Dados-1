//LISTA 02
//EXERCICIO 2
//Faça um programa que solicite ao usuário para digitar seu nome. Logo após, exibir o nome digitado.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	printf("Bom dia, %s!", nome);
	
	return 0;
}
