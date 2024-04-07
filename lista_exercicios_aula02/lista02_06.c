//LISTA 02
//EXERCICIO 6
//Faça um programa que solicite ao usuário para digitar um valor. Logo após, utilize a biblioteca Matemática para calcular e exibir:
//a) O número elevado ao cubo
//b) O número elevado ao quadrado
//c) A raiz cúbica do número
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, cubo, quadrado, raiz;
	
	printf("Digite um número: \n");
	scanf("%f", &num);
	
	cubo = pow(num, 3);
	quadrado = pow(num, 2);
	raiz = cbrt(num); //cbrt calcula raiz cubica
	
	printf("--> %.2f elevado ao cubo é %.2f  \n", num, cubo );
	printf("--> %.2f elevado ao quadrado é %.2f  \n", num, quadrado );
	printf("--> %.2f tem como raiz cubica %.2f  \n", num, raiz );
	
	return 0;
}
