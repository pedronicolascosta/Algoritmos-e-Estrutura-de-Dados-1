//2.3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, raiz;
	
	printf("Digite um número: \n");
	scanf("%f", &num);
	
	if(num>0){
		printf("---raiz quadrada aqui---");
	}
	
	else{
		raiz = num * num;
		printf("O número digitado é negativo, mas seu valor ao quadrado é %.2f", raiz);
	}
	
	return 0;
}
