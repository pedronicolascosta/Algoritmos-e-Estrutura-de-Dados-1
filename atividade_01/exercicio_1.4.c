//Leia um número real e imprima o resultado do quadrado desse número.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, quadrado;
	
	printf("Digite um número real: \n");
	scanf("%f", &num);
	
	quadrado = num * num;
	
	printf("O quadrado de %.2f é = %.2f", num, quadrado);
	
	return 0;
}
