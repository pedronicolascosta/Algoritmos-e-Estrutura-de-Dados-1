//Atividade 02
//Faça um programa que receba os três lados de um triângulo e faça as seguintes atividades:
//--retornar se os três lados realmente formam um triângulo 
//--que tipo de triângulo é esse

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	
	printf("Digite o lado 1 do triângulo: \n");
	scanf("%d", &lado1);
	
	printf("Digite o lado 2 do triângulo: \n");
	scanf("%d", &lado2);
	
	printf("Digite o lado 3 do triângulo: \n");
	scanf("%d", &lado3);
	
	
	//verifica se é triangulo ou nao
	if(((lado1+lado2) > lado3) && ((lado1+lado3) > lado2) && ((lado3+lado2) > lado1)){
		printf("Isto é um triângulo. \n");
	}
	else{
		printf("Isto NÃO é um triângulo. \n");
	}
	

	//verifica se o triangulo é equilatero, escaleno ou isosceles
	if((lado1 == lado2) && (lado1 == lado3)){ 
		printf("Este é um TRIÂNGULO EQUILÁTERO (todos os lados são iguais)\n");
	}
	else{
		if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
			printf("Este é um TRIÂNGULO ESCALENO (todos os lados são diferentes) \n");
		}
		if((lado1 == lado2) || (lado2 == lado3)){
			printf("Este é um TRIÂNGULO ISÓSCELES (dois lados são iguais) \n");
		}
	}
	
	return 0;
}
