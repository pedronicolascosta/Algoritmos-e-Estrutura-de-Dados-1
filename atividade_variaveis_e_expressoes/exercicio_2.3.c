//2.3. Leia um n�mero real. Se o n�mero for positivo imprima a raiz quadrada. Do contr�rio, imprima o n�mero ao quadrado.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, raiz;
	
	printf("Digite um n�mero: \n");
	scanf("%f", &num);
	
	if(num>0){
		printf("---raiz quadrada aqui---");
	}
	
	else{
		raiz = num * num;
		printf("O n�mero digitado � negativo, mas seu valor ao quadrado � %.2f", raiz);
	}
	
	return 0;
}
