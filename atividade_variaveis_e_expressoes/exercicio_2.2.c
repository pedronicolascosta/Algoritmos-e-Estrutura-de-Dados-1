//2.2. Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada do n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, raiz;
	
	printf("Digite um n�mero: \n");
	scanf("%f", &num);
	
	if(num>0){
		printf("---calcular raiz quadrada aqui---");
	}
	
	else{
		printf("O n�mero digitado � inv�lido.");
	}
	
	return 0;
}
