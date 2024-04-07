//LISTA 01
//EXERCICIO 4
//Este exemplo pede ao usuário que informe três notas. Logo após, calcula e exibe a média final destas notas. Por último, verifica se alguma das notas parciais é menor que a média final e a exibe (caso exista).
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	
	printf("Digite a nota 1: \n");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: \n");
	scanf("%f", &nota2);
	
	printf("Digite a nota 3: \n");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3.0;
	
	printf("A média de notas é: %.2f \n", media);

	if(nota1<media ||  nota2<media || nota3<media){
		printf("Uma das notas é menor que a média.\n");
		if(nota1<media){
			printf("A nota 1 é menor que a média.");
		};
		if(nota2<media){
			printf("A nota 2 é menor que a média.");
		};
		if(nota3<media){
			printf("A nota 3 é menor que a média.");
		};
	}
	else{
		printf("Nenhuma das notas é menor que a média");
	}
	
	return 0;
}
