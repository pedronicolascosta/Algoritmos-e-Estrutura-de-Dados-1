//Exemplo 2
//Programa que exibe a mensagem Ol� Mundo!
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Ol� Mundo!");
	
	return 0;
}
