//2.1. Faça um programa que receba dois números e mostre qual deles é o maior.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	
	printf("Digite um número: \n");
	scanf("%f", &num1);
	
	printf("Digite um outro número: \n");
	scanf("%f", &num2);
	
	if(num1>num2){
		printf("Entre os dois valores, o número maior é %.2f", num1);
	}
	
	else{
		printf("Entre os dois valores, o número maior é %.2f", num2);
	}
	
	return 0;
}
