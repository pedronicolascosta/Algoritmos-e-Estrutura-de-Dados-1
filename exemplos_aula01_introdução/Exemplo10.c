//Exemplo 10 - Multiplica dois numeros e exibe resultado na tela
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "Portuguese");
	int a,b, mult;
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	
	mult = a * b;
	
	printf("\n A multiplicação dos números é igual a %d" , mult);
	
	return 0;
}
