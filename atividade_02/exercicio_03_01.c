//Atividade 02
//Escreva um programa que solicite ao usuário um número e imprima os números pares de 2 até o número inserido usando um loop "for".

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	for(i=2; i<=num; i++){
		if(i%2==0){
			printf("%d é um número par \n", i);
		}
	}
	
	return 0;
}
