#include <stdio.h>

int main(){

    int i;
    float n[5], maior, menor;
    float media;

    printf("Entre os cinco valores inteiros: ");
    for (i=0; i<5; i++){
        scanf("%f", &n[i]);
    }

    media=(n[0]+n[1]+n[2]+n[3]+n[4])/5.0; //Calcula a media dos 4 valores

    menor = n[0];
    for (i=1; i<5; i++){ //Passa por todos os numeros do vetor, verificando se o numero é menor do que a variavel menor
        if(n[i] < menor){
            menor = n[i]; //Se for menor, atribui esse valor para menor
        }
    }

    maior = n[0];
    for (i=1; i<5; i++){//Passa por todos os numeros do vetor, verificando se o numero é maior do que a variavel maior
        if(n[i] > maior){
            maior= n[i];//Se for maior, atribui esse valor para maior
        }
    }

    printf("\nMedia: %.4f", media); //Printa a media dos valores
    printf("\nMenor valor: %.2f", menor); //Printa o menor valor
    printf("\nMaior valor: %.2f", maior);//Printa o mairo valor

    return 0;
}
