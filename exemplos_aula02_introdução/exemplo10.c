//Exemplo 10
//Exemplo com texto MANIPULANDO STRING
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[30]; //a string (variavel de texto) terá limite de 29 caracteres
	
	printf("Digite seu nome: \n");
	scanf("%30[^\n]%*c", nome);
	
	//scanf("%30[^\n]%*c", nome), ONDE %30 DECLARA QUE -->		pega 29 caracteres 
	//scanf("%30[^\n]%*c", nome), ONDE [^\n] DECLARA QUE -->	Ignora NewLine
	//scanf("%30[^\n]%*c", nome), ONDE %*c DECLARA QUE -->		Caractere de controle
	//SUPER DICA ---> Quando trabalhamos com strings não precisamos colocar o símbolo &, antes da variável
	
	printf("\n SEU NOME É: %s", nome);
	
	return 0;
}
