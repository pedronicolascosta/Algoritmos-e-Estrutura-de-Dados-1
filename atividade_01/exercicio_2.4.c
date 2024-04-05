//2.4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
		//2.4.1 O número digitado ao quadrado
		//2.4.2 A raiz quadrada do número digitado
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, quadrado, raiz;
	
	printf("Digite um número: \n");
	scanf("%f", &num);
	
	if(num>0){
		quadrado = num * num;
		raiz = sqrt(num);
		printf("Este valor ao quadrado é %.2f", quadrado);
		printf("\nA raiz quadrada do valor é %.2f", raiz);
	}
	
	else{
		printf("Número inválido.");
	}
	
	return 0;
}
