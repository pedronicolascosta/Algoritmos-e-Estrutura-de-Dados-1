//LISTA 01
//EXERCICIO 3
//Este exemplo pede ao usuário que informe um número inteiro. Logo após, exibe uma mensagem indicando se o número informado é positivo, negativo ou igual a zero.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	
	if(num<0){
		printf("O número é NEGATIVO");
	}
	else{
		if(num==0){
			printf("O número é ZERO");
		}
		else{
			printf("O número é POSITIVO");
		}
	}
	
	return 0;
}
