//Atividade 02
//Escreva um programa que solicite ao usu�rio um n�mero e imprima os n�meros pares de 2 at� o n�mero inserido usando um loop "for".

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	for(i=2; i<=num; i++){
		if(i%2==0){
			printf("%d � um n�mero par \n", i);
		}
	}
	
	return 0;
}
