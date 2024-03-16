//Exemplo 5
//Programa que multiplica dois números e exibe o resultado na tela.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b, mult;
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	
	mult = a * b;
	
	printf("\nA multiplicação dos números é = %d", mult);
	
	return 0;
}
