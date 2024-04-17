//Atividade 02
//Crie um programa que peça ao usuário para adivinhar um número (por exemplo, 42) e continue pedindo até que o usuário acerte o número.

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int adivinha=0;
	
	while(adivinha != 42){
		printf("Adivinhe o número: \n");
		scanf("%d", &adivinha);
		
		if(adivinha == 42){
			printf("Parabéns você acertou! O número é 42");
		}
	}
	
	return 0;
}
