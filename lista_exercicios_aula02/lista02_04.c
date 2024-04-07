//LISTA 02
//EXERCICIO 4
//Faça um programa que solicite ao usuário para digitar dois valores, neste caso o primeiro valor é o lado X de um retângulo e o segundo valor o lado Y. Logo após, calcular a área deste retângulo e exibir:
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float X, Y, area;
	
	printf("Digite o valor do lado X do retângulo: \n");
	scanf("%f", &X);
	
	printf("Digite o valor do lado Y do retângulo: \n");
	scanf("%f", &Y);
	
	area = X * Y;
	
	printf("A área desse retângulo é igual a: %.2f", area);
	
	return 0;
}
