//Atividade 02
//Fa�a um programa para imprimir todos os n�meros entre 1 e 100, exceto aqueles divis�veis por 6.

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=1; i<=100; i++){
		if(i%6 != 0){
			printf("%d n�o � divisivel por 6 \n", i);
		}
	}
	
	return 0;
}
