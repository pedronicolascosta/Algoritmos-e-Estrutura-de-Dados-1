//2.3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.
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
		raiz = num * num;
		printf("O número digitado é negativo, mas seu valor ao quadrado é %.2f", raiz);
	}
	
	return 0;
}
