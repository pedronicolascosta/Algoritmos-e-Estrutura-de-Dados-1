//2.7 Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem Números iguais.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, diferenca;
	
	printf("Digite um número: \n");
	scanf("%d", &num1);
	
	printf("Digite um outro número: \n");
	scanf("%d", &num2);
	
	if(num1==num2){
		printf("Números iguais.");
	}
	
	else{
		if(num1>num2){
			diferenca = num1 - num2 ;
			printf("O número maior é: %d \n", num1);
			printf("A diferença entre os dois números é de: %d \n", diferenca);
		}
	
		else{
			diferenca = num2 - num1 ;
			printf("O número maior é: %d \n", num2);
			printf("A diferença entre os dois números é de: %d \n", diferenca);
		}
	}

	return 0;
}
