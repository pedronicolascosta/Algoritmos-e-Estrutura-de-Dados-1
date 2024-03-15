//Lista 1 - Exercícios
//Autor: Pedro Nicolas Costa
//Faça um programa que calcula a área de um retângulo, ou seja, o usuário digita o valor do lado X e o valor do lado Y do retângulo (tipo real), depois faça o cálculo da área exiba o resultado na tela.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float X,Y,area;
    
    printf("Bem vindo à calculadora de ÁREA DE RETÂNGULOS! \n");
    printf("Digite o valor do lado X: \n");
    scanf("%f", &X);
    
    printf("\n Digite o valor do lado Y: \n");
    scanf("%f", &Y);
    
    area = X * Y;
    
    printf("\n A área do retângulo é igual à: %f", area);
    
return 0;
    }
