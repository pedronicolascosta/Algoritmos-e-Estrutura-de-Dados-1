//Atividade 02
//Crie um programa que calcule a soma dos números pares de 1 a 100 usando um loop "while"

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1, soma=0;
	
	while(i<=100){
		if(i%2==0){
			printf("%d é um número par \n", i); //linha de codigo so para visualizar se esta pegando somente os pares
			soma = soma + i;
		}
		i++;
	}
	
	printf("A soma dos números pares de 1 a 100 é igual a %d", soma);
	
	return 0;
}
