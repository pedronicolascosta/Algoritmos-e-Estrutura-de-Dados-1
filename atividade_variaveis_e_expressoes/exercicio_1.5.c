//1.5. Leia quatro notas, calcule a média aritmética e imprima o resultado.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite as quatro notas \n");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	
	media = ((nota1 + nota2 + nota3 + nota4) / 4);
	
	printf("A média das notas é igual à %.2f", media);
	
	return 0;
}
