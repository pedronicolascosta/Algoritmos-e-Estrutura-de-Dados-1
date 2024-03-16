//----Exemplo de ESTRUTURA DE SELEÇÃO OU DECISÃO----
//--->"SE-ENTÃO-SENÃO"<---
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a = -1;
	
	if(a>0){
		printf("A é maior que zero");
	}
	
	else{
		printf("A é igual ou menor que zero");
	}
	
	printf("\n Continuação do programa \n");
	
	return 0;
}

