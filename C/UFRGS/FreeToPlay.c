#include <stdio.h>

int main(){

    int opcao;
    float raio;

    printf("Escolha 1 para calcular a area da circunferência, e 2 para calcular o perimetro: ");
    scanf("%d", &opcao);
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    if(opcao==1){
        printf("Area do circulo com raio %.2f: %.4f", raio, raio*3.1415);
    }
    else if(opcao==2){
        printf("Perimetro do circulo com raio %.2f: %.4f", raio, 2*3.1415*raio);
    }
    else{
        printf("O valor digitado foi diferente de '1' ou '0'");
    }

    printf("\n");

    return 0;
}
