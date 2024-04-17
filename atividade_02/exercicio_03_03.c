//Atividade 02
//Crie um programa que pe�a ao usu�rio para adivinhar um n�mero (por exemplo, 42) e continue pedindo at� que o usu�rio acerte o n�mero

//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int adivinha, i;
	
	for(i=1; adivinha!=42; i++){
		printf("Tentativa %d: Adivinhe o n�mero: \n", i);
		scanf("%d", &adivinha);
		
		if(adivinha == 42){
			printf("Acertou! O n�mero � 42");
		}
	}
	
	return 0;
}
