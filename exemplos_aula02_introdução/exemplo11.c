//Exemplo 11
//Exemplo com texto FUNÇÃO GETS ( GET STRING )
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	char nome[50];
	
	printf("Digite seu nome: \n");
	gets(nome); //GETS <--------------------------
	//GETS Esta função armazena tudo que foi digitado, inclusive os espaços, até que a tecla ENTER seja pressionada.
	
	printf("Nome = %s", nome);
	
	return 0;
}
