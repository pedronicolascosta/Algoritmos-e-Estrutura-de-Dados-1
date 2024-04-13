//Simulado
//Exercicio 8
// encontrar o primeiro inteiro divisível por 11 e 13, verificando entre 1 e 500. Imprima "valor encontrado" e o valor ou "valor não encontrado" . Se encontrar o primeiro valor já imprime e termina o programa.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	int num1 = 11;
	int num2 = 13;
	int i;
	
	for(i=1; i<500; i++){
		if((num1%i == 0) && (num2%i == 0)){
			printf("Valor encontrado = %d", i);
		}
	}
	
	return 0;
}
