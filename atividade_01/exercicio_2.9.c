//Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, emprestimo;
	
	printf("Digite o valor do salário: \n");
	scanf("%f", &salario);
	
	printf("Digite o valor do empréstimo desejado: \n");
	scanf("%f", &emprestimo);
	
	if(emprestimo>salario*0.20){
		printf("Empréstimo NÃO concedido.");
	}
	
	else{
		printf("Empréstimo CONCEDIDO!");
	}
	
	return 0;
}
