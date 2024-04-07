//LISTA 02
//EXERCICIO 5
//Faça um programa que solicite ao usuário para digitar três valores. Logo após, calcular e exibir:
//a) A soma entre os números
//b) A subtração entre os números
//c) A multiplicação entre os números
//d) A divisão entre os números
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, soma, sub, mult, div;
	
	printf("Digite o primeiro número: \n");
	scanf("%f", &num1);
	
	printf("Digite o segundo número: \n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("--> %.2f + %.2f = %.2f \n", num1, num2, soma);
	printf("--> %.2f - %.2f = %.2f \n", num1, num2, sub);
	printf("--> %.2f * %.2f = %.2f \n", num1, num2, mult);
	printf("--> %.2f / %.2f = %.2f \n", num1, num2, div);
	
	return 0;
}
