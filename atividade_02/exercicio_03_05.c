//Atividade 02
//Faça um programa para imprimir todos os números entre 1 e 100, exceto aqueles divisíveis por 6.

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=1; i<=100; i++){
		if(i%6 != 0){
			printf("%d não é divisivel por 6 \n", i);
		}
	}
	
	return 0;
}
