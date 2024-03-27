//2.8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media;
	
	printf("Digite a NOTA 1 do aluno: \n");
	scanf("%f", &nota1);
	
	printf("Digite a NOTA 2 do aluno: \n");
	scanf("%f", &nota2);
	
	if(((nota1<0)||(nota1>10))||((nota2<0)||(nota2>10))){
		printf("NOTA INVÁLIDA! VALORES PRECISAM ESTAR ENTRE 0 E 10.");
	}
	
	else{
		media = (nota1 + nota2) / 2.0;
		printf("A média das notas é = %.2f", media);
	}
	
	return 0;
}
