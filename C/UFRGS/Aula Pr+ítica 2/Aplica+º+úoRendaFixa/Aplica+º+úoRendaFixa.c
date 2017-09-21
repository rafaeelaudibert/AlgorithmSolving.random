/*
    Programa desenvolvido por Rafael Baldasso Audibert em 06/09/2017

    Objetivo: Calcular o Montante final ap�s uma determinada quantia ter sido investida em uma aplica��o de renda fixa.

    Entradas: ValorInicial, RendimentoMensal, NumeroMeses
    Sa�da: MontanteFinal

*/

#include <stdio.h> //Inclu�do para utilizar fun��es de I/O
#include <math.h> //Inclu�do para utilizar a fun��o pot�ncia

int main(){

    float ValInicial, RendMensal, MontFinal;
    int NumMeses;

    printf("Entre o valor inicial em reais: R$ ");
    scanf("%f", &ValInicial);
    printf("Entre o rendimento mensal (Percentual): ");
    scanf("%f", &RendMensal);
    printf("Entre a quantidade de meses da aplicacao: ");
    scanf("%d", &NumMeses);

    MontFinal = ValInicial * pow((1+RendMensal/100), NumMeses); //Formula para calcular o montante final a partir da taxa e do numero de meses

    printf("\nO montante apos os %d meses sera de: R$ %4.2f\n\n", NumMeses, MontFinal);

    return 0;

}

