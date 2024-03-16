//Exemplo 8
//Programa em C simples: somando dois inteiros
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){ //funcao main inicia execução do programa
	setlocale(LC_ALL, "Portuguese");
	int inteiro1, inteiro2, soma;
	
	printf("Digite o primeiro inteiro\n"); //prompt
	scanf("%d", &inteiro1); //le um inteiro
	
	printf("Digite o segundo inteiro\n");
	scanf("%d", &inteiro2);
	
	soma = inteiro1 + inteiro2;
	
	printf("A soma é %d \n", soma);
	
	return 0;
	
}
