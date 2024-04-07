//LISTA 02
//EXERCICIO 7
//Faça um programa que solicite ao usuário para digitar dois valores inteiros e os armazene em duas variáveis, exibe esses dois da seguinte forma
//A = número 1, B = número 2. Logo após, o programa deve trocar os valores contidos nas variáveis entre si e os exibe ao usuário da mesma forma anterior.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, aux;
	
	printf("Digite um valor para A: \n");
	scanf("%d", &a);
	
	printf("Digite um valor para B: \n");
	scanf("%d", &b);
	
	printf("A = %d \n", a);
	printf("B = %d \n", b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("------------------\n");
	printf("A = %d \n", a);
	printf("B = %d \n", b);
	
	return 0;
}
