//Exemplo 16
//Algoritmo (Programa) que calcula a média de seis números exibe o resultado na tela
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, n6;
	float media;
	
	printf("Digite seis números: \n");
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	
	media = ((n1 + n2 + n3 + n4 + n5 + n6) / 6.0);
	
	printf("\nA média dos valores é = %.2f", media);
	//%.2f INDICA QUE SÓ QUEREMOS IMPRIMIR DOIS NÚMEROS DEPOIS DA VÍRGULA DA VARIAVEL
	
	return 0;
}
