//1.6. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float real, dolar, conversao;
	
	printf("Digite um valor em real: \n");
	scanf("%f", &real);
	
	printf("Agora, digite a atual cotação do dólar: \n");
	scanf("%f", &dolar);
	
	conversao = real / dolar;
	
	printf("O valor %.2f em real é igual à %.2f dólares.", real, conversao);
	
	return 0;
}
