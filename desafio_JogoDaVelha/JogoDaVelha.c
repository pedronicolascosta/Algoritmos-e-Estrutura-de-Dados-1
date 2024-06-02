//Autores: Giovanna Lanzi Lopes Torres e Pedro Nicolas Costa
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char mat[3][3]; 
    int jogador = 1; 
    int L, C; 
    int i, x; 
    int ganhou = 0, qtdpreenchidos = 0; 
    int escolha; 
    char simbolo; 
    char jogador1[15], jogador2[15];

    
    for (L = 0; L < 3; L++) {
        for (C = 0; C < 3; C++) {
            mat[L][C] = ' '; 
        }
    }

    
    printf("----BEM VINDOS AO JOGO DA VELHA!----\n");
    printf("Digite o nome do Jogador #1: ");
    gets(jogador1);
    printf("Digite o nome do Jogador #2: ");
    gets(jogador2);

    printf("\nO Jogador %s será O e o Jogador %s será X.\n\n", jogador1, jogador2);
    printf("----MANUAL DO JOGO----\n");
    printf("-> Você controlará suas jogadas a partir do TECLADO NÚMERICO de seu computador. Observe que ele é composto por 9 botões, que irão representar as posições do jogo da velha.\n");
    printf("\n\n\t 7 | 8 | 9\n\t-----------\n\t 4 | 5 | 6\n\t-----------\n\t 1 | 2 | 3\n\n");

	
    do {
        
        for (L = 0; L < 3; L++) {
            for (C = 0; C < 3; C++) {
                if (C == 0)
                    printf("\t");
                printf(" %c ", mat[L][C]);
                if (C < 2)
                    printf("|");
            }
            if (L < 2)
                printf("\n\t-----------\n");
        }
        printf("\n");

        
        if (jogador == 1) {
            simbolo = 'O';
        } else {
            simbolo = 'X';
        }

        
        do {
            if (jogador == 1) {
                printf("%s, digite a posição (1-9) onde você deseja jogar: ", jogador1);
            } else {
                printf("%s, digite a posição (1-9) onde você deseja jogar: ", jogador2);
            }
            scanf("%d", &escolha);
        }
		while (escolha < 1 || escolha > 9); 

        
        switch (escolha) {
            case 7: L = 0; C = 0; break;
            case 8: L = 0; C = 1; break;
            case 9: L = 0; C = 2; break;
            case 4: L = 1; C = 0; break;
            case 5: L = 1; C = 1; break;
            case 6: L = 1; C = 2; break;
            case 1: L = 2; C = 0; break;
            case 2: L = 2; C = 1; break;
            case 3: L = 2; C = 2; break;
        }

        
        if (mat[L][C] == ' ') {
            mat[L][C] = simbolo; 
            if (jogador == 1) {
                jogador = 2; 
            } else {
                jogador = 1; 
            }
        } else {
            printf("Posição já ocupada! Tente novamente.\n"); 
        }

        
        for (i = 0; i < 3; i++) {
            
            if (mat[i][0] == simbolo && mat[i][1] == simbolo && mat[i][2] == simbolo) {
                ganhou = 1;
            }
            
            if (mat[0][i] == simbolo && mat[1][i] == simbolo && mat[2][i] == simbolo) {
                ganhou = 1;
            }
        }
        
        if ((mat[0][0] == simbolo && mat[1][1] == simbolo && mat[2][2] == simbolo) ||
            (mat[0][2] == simbolo && mat[1][1] == simbolo && mat[2][0] == simbolo)) {
            ganhou = 1;
        }
        
        if (ganhou == 1) { 
            if (jogador == 1) {
                printf("\nParabéns! Vitória do jogador %s!\n", jogador2); 
		printf("Autores: Giovanna Lanzi Lopes Torres e Pedro Nicolas Costa");
            } else {
                printf("\nParabéns! Vitória do jogador %s!\n", jogador1); 
		printf("Autores: Giovanna Lanzi Lopes Torres e Pedro Nicolas Costa");
            }
        }
        
        
        qtdpreenchidos = 0; 
        for (i = 0; i < 3; i++) {
            for (x = 0; x < 3; x++) {
                if (mat[i][x] != ' ') { 
                    qtdpreenchidos++; 
                }
            }
        }
        if (qtdpreenchidos == 9 && !ganhou) { 
            printf("\nO jogo foi EMPATADO!\nReinicie o programa para jogar novamente.\n"); 
            break; 
        }
        
        

    } while (ganhou == 0);

    return 0;
}
