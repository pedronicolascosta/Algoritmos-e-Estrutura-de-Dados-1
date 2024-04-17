//Atividade 02
//Crie um programa que calcule a soma dos números pares de 1 a 100 usando um loop "for"

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, soma;
	
	for(i=1; i<=100; i++){
		if(i%2==0){
			printf("%d é número par \n", i);
			
			soma = soma + i;
		}
	}
	
	printf("O resultado da soma dos números pares entre 1 e 100 é %d", soma);
	
	return 0;
}
