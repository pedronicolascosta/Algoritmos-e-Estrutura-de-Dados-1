//Atividade 02
//Crie um programa que peça ao usuário para adivinhar um número (por exemplo, 42) e continue pedindo até que o usuário acerte o número

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int adivinha, i;
	
	for(i=1; adivinha!=42; i++){
		printf("Tentativa %d: Adivinhe o número: \n", i);
		scanf("%d", &adivinha);
		
		if(adivinha == 42){
			printf("Acertou! O número é 42");
		}
	}
	
	return 0;
}
