//Exemplo 9 - Recebe nome do usuário e exibe na tela
//Autor: Pedro Nicolas Costa

#include <stdio.h>
int main(void){
	char nome[10];
	scanf("%s", nome);
	
	//gets(nome);
	
	printf("Nome: %s", nome);
	
	return 0;
}
