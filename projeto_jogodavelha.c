//Projeto Jogo da Velha
//Autor: Pedro Nicolas Costa

#include <stdio.h>  //<---- instala biblioteca padr�o para linguagem C
#include <locale.h> //<---- instala biblioteca para print de caracteres especiais da lingua portuguesa
#include <stdlib.h> //<---- instala biblioteca que passa comandos ao terminal ou console

int main(){ //<---- inicia c�digo
	setlocale(LC_ALL, "Portuguese"); //<---- configura a biblioteca locale para o idioma da lingua portuguesa
	
	int escolha[9];
	char jogador1, jogador2;
	
	printf("----BEM VINDO(A) AO JOGO DA VELHA!---- \n");
	printf("Chame um amigo e comece a jogar!\n");
	printf("\n     |     |     \n_____|_____|_____\n     |     |     \n_____|_____|_____\n     |     |     \n_____|_____|_____\n     |     |     \n\n");
	
	printf("MANUAL DO JOGO: \n");
	printf("-> Voc� controlar� suas jogadas a partir do TECLADO N�MERICO de seu computador. Observe que ele � comporto por 9 bot�es, que ir�o representar as posi��es do jogo da  velha.");
	printf("\n\n  7  |  8  |  9  \n_____|_____|_____\n  4  |  5  |  6  \n_____|_____|_____\n  1  |  2  |  3  \n_____|_____|_____\n     |     |     \n\n");
	printf("\nPor exemplo: quero marcar minnha posi��o no centro do jogo: logo, quando chegar minha vez de jogar, irei clicar no n�mero 5. \n");
	
	printf("Vamos come�ar? Digite a tecla ENTER para iniciar a configura��o...");
	
		while (getchar() != '\n');
		
	system("cls");
	
	printf("Para come�ar, por favor, digite o nome do Jogador n� 1: ");
	scanf("%s", &jogador1);
	
	printf("\nAgora, digite o nome do Jogador n�2: ");
	scanf("%s", &jogador2);
	printf("SEJAM BEM VINDOS %s & %s", jogador1, jogador2);
	printf("%s, � sua vez de jogar! Voc� ser� o X");
	printf("\nEscolha a sua posi��o no tabuleiro seguindo a posi��o do teclado:\n");
	printf("\n\n  7  |  8  |  9  \n_____|_____|_____\n  4  |  5  |  6  \n_____|_____|_____\n  1  |  2  |  3  \n_____|_____|_____\n     |     |     \n\n");
	scanf("%d", &escolha[1]);
	
	
	return 0;
}

