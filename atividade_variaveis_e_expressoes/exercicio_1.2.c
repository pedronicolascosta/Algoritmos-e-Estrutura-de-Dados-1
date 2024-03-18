//Faça um programa que leia um número real e o imprima.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num;
	
	printf("Digite um número real \n");
	scanf("%f", &num);
	
	printf("O número é %.2f", num);
	
	return 0;
}
