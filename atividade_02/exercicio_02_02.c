//Atividade 02
//Escreva um programa que solicite ao usu�rio um n�mero e imprima os n�meros de 1 at� o n�mero inserido usando um loop "while".

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1, n;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &n);
	
	while(i<=n){
		printf("%d \n", i);
		i++;
	}
	
	return 0;
}
