//Atividade 02
//Escreva um programa que calcule a m�dia de 5 n�meros fornecidos pelo usu�rio usando um loop "while".

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, soma=0, i = 1;
	float media;
	
	while(i<=5){
		printf("Digite o %d� n�mero: \n", i);
		scanf("%d", &num);
		
		soma = soma + num;
		
		i++;
	}
	
	media = soma / 5.0;
	
	printf("A m�dia dos valores digitados � %.2f", media);
	
	return 0;
}
