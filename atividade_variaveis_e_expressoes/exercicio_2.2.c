//2.2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, raiz;
	
	printf("Digite um número: \n");
	scanf("%f", &num);
	
	if(num>0){
		raiz = sqrt(num);
		printf("A raiz do número digitado é %.2f", raiz);
	}
	
	else{
		printf("O número digitado é inválido.");
	}
	
	return 0;
}
