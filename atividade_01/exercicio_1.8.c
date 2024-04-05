//1.8. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo se que esse funcionário tem uma gratificação de 5% sobre o salário-base.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario,aumento, total;
	
	printf("Digite o valor atual do salário-base do funcionário: \n");
	scanf("%f", &salario);
	
	aumento = salario * 0.05;
	aumento += salario;
	
	printf("Agora, o valor atual do salário-base do funcionário, será de: %.2f", aumento);
	
	return 0;
	
}
