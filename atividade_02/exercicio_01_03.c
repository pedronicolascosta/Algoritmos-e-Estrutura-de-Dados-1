//Atividade 02
//Fa�a um programa que calcule o n-�simo termo da s�rie de Fibonacci.

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1, n, soma, f1=1, f2=1;
	
	printf("Digite o tamanho desejado para a sequ�ncia de Fibonacci: \n");
	scanf("%d", &n);
	
	if(n<2){
		printf("Reinicie o programa e digite um valor maior ou igual a 2.");
	}
	else{
		printf("O n�mero � maior ou igual a 2.");
		
		for(i=1; i<=n; i++){
			
		}
		
	}
		
	return 0;
}
