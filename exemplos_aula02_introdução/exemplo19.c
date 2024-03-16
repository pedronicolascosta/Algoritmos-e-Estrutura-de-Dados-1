//Exemplo 19
//Algoritmo (Programa) que soma dois números reais e mostra o resultado na tela
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float X, Y, SOMA;
	
	printf("Digite o número X: \n");
	scanf("%f", &X);
	
	printf("Digite o número Y: \n");
	scanf("%f", &Y);
	
	SOMA = X + Y;
	
	printf("\nA soma de %.2f com %.2f é = %.2f", X, Y, SOMA);
	
	return 0;
}
