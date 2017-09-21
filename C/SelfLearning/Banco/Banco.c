#include <stdio.h>

int main(){

    float valor_conta, movimentacao;

    printf("%f\n", valor_conta);


    printf("Entre o saldo inicial: R$ ");
    scanf("%f", &valor_conta);

    //Bloco da primeira movimentacao
    printf("\nEntre o valor da primeira movimentacao: R$ ");
    scanf("%f", &movimentacao);
    valor_conta+=movimentacao; //Faz a operacao de adicionar o valor da movimentacao no valor_conta
    printf("Seu saldo parcial eh: R$ R$ %.2f", valor_conta);
    if (valor_conta<0){//Se o saldo for negativo, avisa o usuario
        printf(". Cuidado, seu saldo eh negativo!!!");
    }

    //Bloco da segunda movimentacao
    printf("\nEntre o valor da segunda movimentacao: R$ ");
    scanf("%f", &movimentacao);
    valor_conta+=movimentacao; //Faz a operacao de adicionar o valor da movimentacao no valor_conta
    printf("Seu saldo parcial eh: R$ R$ %.2f", valor_conta);
    if (valor_conta<0){//Se o saldo for negativo, avisa o usuario
        printf(". Cuidado, seu saldo eh negativo!!!");
    }

    //Bloco da terceira movimentacao
    printf("\nEntre o valor da terceira movimentacao: R$ ");
    scanf("%f. ", &movimentacao);
    valor_conta+=movimentacao; //Faz a operacao de adicionar o valor da movimentacao no valor_conta
    printf("Seu saldo parcial eh: R$ R$ %.2f", valor_conta);
    if (valor_conta<0){//Se o saldo for negativo, avisa o usuario
        printf(". Cuidado, seu saldo eh negativo!!!\n\n");
    }

    return 0;
}
