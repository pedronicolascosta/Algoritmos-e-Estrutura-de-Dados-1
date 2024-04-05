//1.7. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, antes, depois;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	
	antes = num - 1;
	depois = num + 1;
	
	printf("O antecessor de %d é = %d", num, antes);
	printf("\nO sucessor de %d é = %d", num, depois);
	
	return 0;
}
