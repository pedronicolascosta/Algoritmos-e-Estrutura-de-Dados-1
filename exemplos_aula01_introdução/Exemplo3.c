//Exemplo 2 - Somar dois números em linguagem C
//Autor: Pedro Nicolas Costa 

#include <stdio.h>
#include <locale.h> //inserindo bliblioteca para configuração do print de textos com acentuacao

int main(){
	setlocale (LC_ALL, "Portuguese");
	//declaracao de variáveis do tipo real (float)
	float valorPao, valorCafe, valorPagar;
	
	printf("Digite o valor do pão: ");
	scanf("%f", &valorPao);
	
	printf("Digite o valor do café: ");
	scanf("%f", &valorCafe);
	
	valorPagar = valorPao + valorCafe;
	
	printf("\nO valor da compra é igual = %.2f", valorPagar); //%.2f exibe apenas dois numeros depois da virgula
	return 0;
	
	
}
