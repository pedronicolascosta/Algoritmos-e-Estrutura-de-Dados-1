//LISTA 02
//EXERCICIO 3
//Faça um programa que solicite ao usuário para digitar um valor. Logo após, calcular o dobro deste número e exibir:
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, dobro;
	
	printf("Digite um número: \n");
	scanf("%f", &num);
	
	dobro = num*2;
	
	printf("O dobro de %.2f é igual a %.2f", num, dobro);
	
	return 0;
}

