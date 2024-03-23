//1.9. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
	//1.9.1 O total a pagar com desconto de 10%;
	//1.9.2 O valor de cada parcela, no parcelamento de 3% sem juros;
	//1.9.3 A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
	//1.9.4 A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	float valor, desconto, total, comissao, parcela;
	
	printf("Olá vendedor responsável! \n");
	printf("Digite aqui o valor total da compra: \n\n");
	scanf("%f", &valor);
	
	printf("Agora, escolha o tipo de pagamento que o cliente desejar: \n");
	printf("Digite 1 para pagamento à vista e com desconto de 10%%: \n");
	printf("Digite 2 para pagamento com 3 parcelas e sem desconto: \n");
	scanf("%d", &escolha);
	
	if(escolha == 1){
		printf("A escolha foi de PAGAMENTO À VISTA COM DESCONTO DE 10%% \n");
		desconto = valor * 0.10;
		total = valor - desconto;
		printf("O valor total da compra com desconto de 10%% é igual à: %.2f \n", total);
		comissao = (total * 0.05) ;
		printf("\nO valor da comissão do vendedor responsável é igual à: %.2f", comissao);
	}
	
	if(escolha == 2){
		printf("A escolha foi de PAGAMENTO PARCELADO EM 3x SEM DESCONTO \n");
		parcela = (valor / 3);
		printf("O valor de cada uma das 3 parcelas é igual à: %.2f \n", parcela);
		comissao = (valor * 0.05) ;
		printf("\nO valor da comissão do vendedor responsável é igual à: %.2f", comissao);
	}
	
	if(escolha != 1 && escolha != 2){
		printf("VOCÊ ESCOLHEU OPÇÃO DIFERENTE DE 1 OU 2, REINICIE O PROGRAMA E TENTE NOVAMENTE!! \n");
	}
	
	return 0;
}
