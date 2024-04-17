//Atividade 02
//Faça um programa que leia um inteiro positivo n, e imprima as potências do número de 0 até n - ésima potência: 
//exemplo para n=3 -->  3^0 + 3^1 + 3^2 + 3^3 = 40

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, soma=0;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
		printf("%d^%d + ", n, i);
		soma = soma + pow(n,i);
	}
	
	printf("= %d", soma);
	
	return 0;
}
