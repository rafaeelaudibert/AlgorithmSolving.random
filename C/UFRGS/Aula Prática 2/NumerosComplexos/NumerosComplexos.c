/*
    Programa desenvolvido por Rafael Baldasso Audibert em 07/09/2017

    Objetivo: Dados dois n�meros complexos inseridos pelo usu�rio atrav�s do teclado, realizar a soma ou a multiplica��o de ambos
              conforme op��o escolhido pelo mesmo.

    Entradas: ParteReal1, ParteImaginaria1, ParteReal2, ParteImaginaria2, OpcaoEscolha
    Sa�da: Resultado

*/

#include <stdio.h> //Inclu�do para utilizar fun��es de I/O

int main(){

    float PReal1, PImg1, PReal2, PImg2;
    char Opcao; //Vari�vel de Caractere pois ir� guardar somente uma letra.

    printf("Entre o primeiro numero complexo (parte real e parte imaginaria): ");
    scanf("%f%f", &PReal1, &PImg1);
    printf("Entre o segundo numero complexo (parte real e parte imaginaria): ");
    scanf("%f%f", &PReal2, &PImg2);
    printf("Entre a operacao ('S' para Soma ou 'P' para Produto): ");
    scanf(" %c", &Opcao);

    if(Opcao!='S' && Opcao!='P'){
        printf("\nO caractere informado eh invalido. Somente insira 'S' ou 'P'\n"); //Caso o usuario n�o inserir S ou P, informa que esse � um caractere inv�lido
    }else if(Opcao=='S'){
        printf("Resultado: %.5f %.5fi", PReal1+PReal2,PImg1+PImg2); //Realiza f�rmula para resolver soma de n�meros complexos.
    }else{
        printf("Resultado: %.5f %.5fi", PReal1*PReal2-PImg1*PImg2, PReal1*PImg2+PImg1*PReal2); //Realiza f�rmula para resolver multiplica��o de n�meros complexos;
    }

    return 0;

}

