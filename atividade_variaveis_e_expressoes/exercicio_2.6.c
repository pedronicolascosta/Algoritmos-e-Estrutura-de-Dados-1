//2.6 Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.
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
	
	return 0;
}
