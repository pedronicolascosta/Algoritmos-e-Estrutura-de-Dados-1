//Atividade 02
//Faça um programa que leia um inteiro n e calcule e imprima o Fatorial de n.

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, fatorial;
	
	printf("Digite o número que deseja calcular o fatorial: \n");
	scanf("%d", &n);
	
	printf("%d! = ", n);
	
	for(i=n; i>=1; i--){
		printf("%d * ", i);
		fatorial = fatorial * i;
	}
	
	printf(" = %d", fatorial);
	
	return 0;
}
