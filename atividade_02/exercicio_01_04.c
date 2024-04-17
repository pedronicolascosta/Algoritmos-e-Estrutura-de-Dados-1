//Atividade 02
//Fa�a um programa que retorne o resultado do somat�rio abaixo, sendo n o par�metro de entrada
//(5 * i^2 + 2 * i + 8) onde i=1

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, soma=0;
	
	printf("Digite a quantidade de vezes que deseja repetir o somat�rio: \n");
	scanf("%d", &n);
	
	for(i=1;i<=n; i++){
		soma = soma + (5 * pow(i, 2) + 2 * i + 8);
	}
	
	printf("A soma total � igual a %d", soma);
	
	return 0;
}
