/*
    Programa desenvolvido por Rafael Baldasso Audibert em 06/09/2017

    Objetivo: Calcular a nota e o conceito final do aluno a partir das notas recebidas durante o semestre, verificando se
              o aluno compareceu ao número mínimo de aulas (34 aulas (75% das 45 aulas totais)).

              O cálculo do conceito se dá por:
                NotaFinal entre 8,5 e 10 ->  A
                NotaFinal entre 7,5 e 8,4 -> B
                NotaFinal entre 6,0 e 7,4 -> C
                NotaFinal entre 0,0 e 5,9 -> D

                Se o Aluno não entregar o trabalho final, fica impossibilitado de tirar A.

    Entradas: NotaProva1, NotaProva2, NotaAulasPratias, NotaTrabalhoFinal
    Saída: NotaFinal, Conceito

*/

#include <stdio.h> //Incluído para utilizar funções de I/O


int main(){

    float NotaP1, NotaP2, NotaAulaPratica, NotaTrabFinal, NotaFinal;
    int Presencas;

    printf("Entre a quantidade de presencas: ");
    scanf("%d", &Presencas); //Recebe a quantidade de presenças do aluno
    printf("Entre a nota das duas provas, da aula pratica e do trabalho final (em ordem): ");
    scanf("%f%f%f%f", &NotaP1, &NotaP2, &NotaAulaPratica, &NotaTrabFinal); //Recebe o valor das notas

    NotaFinal = NotaP1*0.3+NotaP2*0.45+NotaAulaPratica*0.15+NotaTrabFinal*0.1; //Formula responsavel por calcular a media das notas

     if (Presencas < 34){ //Se o aluno tiver menos presencas do que o necessario, o informa do seu conceito FF (Reprovação por faltas)
        printf("Seu conceito eh FF, por insuficiencia de presencas");
    }else{
        if(NotaFinal>=8.4){
            if (NotaTrabFinal!=0){ //Caso tenha tirado A, e entregue o trabalho final, irá mostrar a nota final do aluno e seu conceito
                printf("\nA nota final eh %.1f e o conceito eh A.\n", NotaFinal);
            }else{ //Caso tenha tirado A, mas não tiver entregue o trabalho final, não irá lhe dar nota A, mas sim nota B
                printf("\nA nota final eh %.1f, mas seu conceito eh B, porque voce nao entregou o trabalho final.\n", NotaFinal);
            }
        }else if(NotaFinal>=7.5){
            printf("\nA nota final eh %.1f e o conceito eh B.\n", NotaFinal); //Mostra a nota final do aluno e seu conceito, caso tenha tirado B
        }else if(NotaFinal>=6){
            printf("\nA nota final eh %.1f e o conceito eh C.\n", NotaFinal); //Mostra a nota final do aluno e seu conceito, caso tenha tirado C
        }else if(NotaFinal>=0){
            printf("\nA nota final eh %.1f e o conceito eh D.\n", NotaFinal); //Mostra a nota final do aluno e seu conceito, caso tenha tirado D
        }
    }

    return 0;
}

