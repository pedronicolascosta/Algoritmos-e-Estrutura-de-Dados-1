//Exemplo 2 - Soma de dois valores em linguagem PORTUGOL
//Autor: Pedro Nicolas Costa

programa {
  funcao inicio() {
    inteiro a,b, soma //declaracao de variaveis do tipo inteiro

    escreva("Digite o valor de A:") //print na tela
    leia(a) //receber valor A

    escreva("Digite o valor de B:") //print na tela
    leia(b) //receber valor B

    soma = a + b //soma dos dois valores
    
    escreva("\n A soma dos números ", a, " e ", b, " é igual a ", soma) //exibicao do resultado
  }
}