//Atividade 02
//Dado uma sequ�ncia de entrada a1, a2, a3, ... , an, calcule e imprima a soma desta sequ�ncia, sendo n um valor inteiro digitado pelo usu�rio.

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, n, a, soma=0;
	
	printf("Digite um n�mero para o valor de 'a': \n");
	scanf("%d", &a);
	
	printf("Digite a quantidade desejada para a sequ�ncia: \n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("%d(%d) + ", a, i);
		soma = soma + a;
	}
	
	printf(" = %d", soma);
	
	return 0;
}
