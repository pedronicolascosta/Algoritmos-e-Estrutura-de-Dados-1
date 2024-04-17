//Atividade 02
//Escreva um programa que solicite ao usuário um número e imprima os números de 1 até o número inserido usando um loop "while".

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1, n;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	while(i<=n){
		printf("%d \n", i);
		i++;
	}
	
	return 0;
}
