//Atividade 02
//Escreva um programa que calcule a média de 5 números fornecidos pelo usuário usando um loop "while".

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, soma=0, i = 1;
	float media;
	
	while(i<=5){
		printf("Digite o %dº número: \n", i);
		scanf("%d", &num);
		
		soma = soma + num;
		
		i++;
	}
	
	media = soma / 5.0;
	
	printf("A média dos valores digitados é %.2f", media);
	
	return 0;
}
