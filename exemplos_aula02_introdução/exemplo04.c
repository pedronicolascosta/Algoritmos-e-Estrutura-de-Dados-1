//Exemplo 4
//Algoritmo (Programa) que calcula o resto da divisão de um número por 2 e exibe o resultado na tela
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int numero, resto;
	
	printf("Digite um valor: ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	printf("O resto (mood) da divisão por 2 = %d", resto);
	
	return 0;
}
