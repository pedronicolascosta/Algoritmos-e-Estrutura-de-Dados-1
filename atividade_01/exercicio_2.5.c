//2.5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, x;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	x = num % 2 ;
	
	if(x != 0){
		printf("O número %d é ÍMPAR.", num);
	}
	
	else{
		printf("O número %d é PAR.", num);
	}
	
	return 0;
}
