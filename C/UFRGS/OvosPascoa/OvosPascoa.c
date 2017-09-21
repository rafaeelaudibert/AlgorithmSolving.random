/*
    Feito por Rafael Baldasso Audibert em 13/09/17

*/

/*
    Uma indústria de ovos de Páscoa fornece três tipos diferentes de ovos de
chocolate. Esse programa lê os dados relativos a um pedido (tipo de Ovo e quantidade) e informa:
• o produto solicitado (tipo de ovo A, B ou C. Fazer consistência do tipo);
• o número de unidades vendidas (com mensagem do limite ultrapassado, se for
o caso);
• o total a ser pago, em reais.
OBS.: Somente pode ser pedido um tipo de ovo por pedido;
      Podem ser pedidos no máximo 50 unidades do ovo A,30 unidades do ovo B ou 20 unidades do ovo C, caso supere esse valor, somente será fornecido a qtde maxima

*/

#include <stdio.h>

int main(){

    char tipo_ovo;
    int qtde_ovos;
    float valor_reais;
    float VALOR_A=12.00, VALOR_B=15.50, VALOR_C=21.30;

    printf("Escolha um tipo de ovo (A, B ou C): ");
    scanf(" %c", &tipo_ovo);
    tipo_ovo=toupper(tipo_ovo);
    printf("Qual a quantidade de ovos do tipo %c voce quer adquirir?\n", tipo_ovo);
    scanf("%d", &qtde_ovos);

    switch(tipo_ovo){
        case 'A':
            if (qtde_ovos > 50){
                qtde_ovos = 50;
                printf("Ovo escolhido: %c\n", tipo_ovo);
                printf("OBS: A quantidade maxima de ovos do tipo A por pedido e 50\n");
                printf("Como voce solicitou mais do que isso, serao lhe fornecidos somente 50\n");
            }
            printf("Quantidade de ovos: %d\n", qtde_ovos);
            printf("Valor da compra: R$ %.2f\n", qtde_ovos*VALOR_A);
            break;
        case 'B':
            if (qtde_ovos > 30){
                qtde_ovos = 30;
                printf("Ovo escolhido: %c\n", tipo_ovo);
                printf("OBS: A quantidade maxima de ovos do tipo B por pedido e 30\n");
                printf("Como voce solicitou mais do que isso, serao lhe fornecidos somente 30\n");
            }
            printf("Quantidade de ovos: %d\n", qtde_ovos);
            printf("Valor da compra: R$ %.2f\n", qtde_ovos*VALOR_B);
            break;
        case 'C':
            if (qtde_ovos > 20){
                qtde_ovos = 20;
                printf("Ovo escolhido: %c\n", tipo_ovo);
                printf("OBS: A quantidade maxima de ovos do tipo C por pedido e 20\n");
                printf("Como voce solicitou mais do que isso, serao lhe fornecidos somente 20\n");
            }
            printf("Quantidade de ovos: %d\n", qtde_ovos);
            printf("Valor da compra: R$ %.2f\n", qtde_ovos*VALOR_C);
            break;
        default:
            printf("Voce nao digitou um valor valido. Somente sao aceitos: A, B ou C");
        }

  return 0;
}

