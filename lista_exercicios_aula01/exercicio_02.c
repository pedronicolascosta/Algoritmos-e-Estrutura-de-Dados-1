//Lista 1 - Exercícios
//Autor: Pedro Nicolas Costa
//Faça um programa que calcula o produto de dois números digitados pelo usuário.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2, mult;
	
	printf("Bem vindo à calculadora de soma! \n");
	
	printf("Digite um valor: \n");
	scanf("%f", &num1 );
	
	printf("Digite outro valor: \n");
	scanf("%f", &num2 );
	
	mult = num1 * num2;
	
	printf("A soma dos dois valores é igual à: %f", mult);
	
	return 0;
}
