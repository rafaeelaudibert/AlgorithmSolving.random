/*
    Programa desenvolvido por Rafael Baldasso Audibert em 07/09/2017

    Objetivo: Dados dois números complexos inseridos pelo usuário através do teclado, realizar a soma ou a multiplicação de ambos
              conforme opção escolhido pelo mesmo.

    Entradas: ParteReal1, ParteImaginaria1, ParteReal2, ParteImaginaria2, OpcaoEscolha
    Saída: Resultado

*/

#include <stdio.h> //Incluído para utilizar funções de I/O

int main(){

    float PReal1, PImg1, PReal2, PImg2;
    char Opcao; //Variável de Caractere pois irá guardar somente uma letra.

    printf("Entre o primeiro numero complexo (parte real e parte imaginaria): ");
    scanf("%f%f", &PReal1, &PImg1);
    printf("Entre o segundo numero complexo (parte real e parte imaginaria): ");
    scanf("%f%f", &PReal2, &PImg2);
    printf("Entre a operacao ('S' para Soma ou 'P' para Produto): ");
    scanf(" %c", &Opcao);

    if(Opcao!='S' && Opcao!='P'){
        printf("\nO caractere informado eh invalido. Somente insira 'S' ou 'P'\n"); //Caso o usuario não inserir S ou P, informa que esse é um caractere inválido
    }else if(Opcao=='S'){
        printf("Resultado: %.5f %.5fi", PReal1+PReal2,PImg1+PImg2); //Realiza fórmula para resolver soma de números complexos.
    }else{
        printf("Resultado: %.5f %.5fi", PReal1*PReal2-PImg1*PImg2, PReal1*PImg2+PImg1*PReal2); //Realiza fórmula para resolver multiplicação de números complexos;
    }

    return 0;

}

