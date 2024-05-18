//faça um programa que leia um número 'n' e imprima 'n' linhas na tela. Supondo que o usuário digite 'n = 6':
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4 5 6
//Autor: Pedro Nicolas Costa

int main(){
	int n, i, x;
	
	printf("Digite o tamanho do desenho: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(x=1; x<=i; x++){
			printf("%d ",x);
		}
		printf("\n");
	}
	
	return 0;
}
