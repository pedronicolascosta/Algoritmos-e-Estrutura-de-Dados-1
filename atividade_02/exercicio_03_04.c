//Atividade 02
//Escreva Escreva um programa que calcule a média de 10 números fornecidos pelo usuário usando um loop "for".

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, soma=0;
	float media=0;
	
	for(i=1; i<=10; i++){
		printf("Digite o %dº número: \n", i);
		scanf("%d", &num);
		
		soma = soma + num;
	}
	
	media = soma / 10.0;
	
	printf("A média dos valores digitados é igual a %.2f", media); 
	
	return 0;
}
