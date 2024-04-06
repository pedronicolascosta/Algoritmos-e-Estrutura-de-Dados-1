//Atividade 02
//Fa�a um programa que receba os tr�s lados de um tri�ngulo e fa�a as seguintes atividades:
//--retornar se os tr�s lados realmente formam um tri�ngulo 
//--que tipo de tri�ngulo � esse

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	
	printf("Digite o lado 1 do tri�ngulo: \n");
	scanf("%d", &lado1);
	
	printf("Digite o lado 2 do tri�ngulo: \n");
	scanf("%d", &lado2);
	
	printf("Digite o lado 3 do tri�ngulo: \n");
	scanf("%d", &lado3);
	
	
	//verifica se � triangulo ou nao
	if(((lado1+lado2) > lado3) && ((lado1+lado3) > lado2) && ((lado3+lado2) > lado1)){
		printf("Isto � um tri�ngulo. \n");
	}
	else{
		printf("Isto N�O � um tri�ngulo. \n");
	}
	

	//verifica se o triangulo � equilatero, escaleno ou isosceles
	if((lado1 == lado2) && (lado1 == lado3)){ 
		printf("Este � um TRI�NGULO EQUIL�TERO (todos os lados s�o iguais)\n");
	}
	else{
		if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
			printf("Este � um TRI�NGULO ESCALENO (todos os lados s�o diferentes) \n");
		}
		if((lado1 == lado2) || (lado2 == lado3)){
			printf("Este � um TRI�NGULO IS�SCELES (dois lados s�o iguais) \n");
		}
	}
	
	return 0;
}
