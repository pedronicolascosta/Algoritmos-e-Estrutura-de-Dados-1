//Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, soma;
	
	printf("Digite três números inteiros: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	soma = num1 + num2 + num3;
	
	printf("A soma dos valores é: %d", soma);
	
	return 0;
}
