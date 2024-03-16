//Exemplo 7
//Programa que multiplica dois números e exibe o resultado na tela.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b, mult;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	mult = a * b;
	
	printf("\n A multiplicação dos números é igual à: %d", mult);
	
	return 0;
}
