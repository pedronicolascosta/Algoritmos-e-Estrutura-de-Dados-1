//Lista 1 - Exercícios
//Autor: Pedro Nicolas Costa
//Faça um programa que calcula a soma de dois números e exibe o resultado na tela.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2, soma;
	
	printf("Bem vindo à calculadora de soma! \n");
	
	printf("Digite um valor: ");
	scanf("%f", &num1);
	
	printf("Digite um outro valor: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	
	printf("\n A soma desses dois valores é igual à: %f", soma);
	
	return 0;
}
