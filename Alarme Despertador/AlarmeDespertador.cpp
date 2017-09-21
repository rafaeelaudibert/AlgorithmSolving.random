#include <iostream>

using namespace std;

int main(){

    int H1, M1, H2, M2, minutos_dormidos=0;

while(cin>>H1>>M1>>H2>>M2){ //Enquanto consigo ler 4 variáveis
    if(H1==0 and M1==0 and H2==0 and M2==0){ //Se todas as variáveis são iguais a 0
        break; //Pare a execução do while
    }

    if (M1==0){
        minutos_dormidos += 0 + M2;

    }else if (M1!=0){
        minutos_dormidos += 60-M1 + M2;
    }

    if (H1<H2 && H2<24 && M1==0 && M2==0){
        minutos_dormidos += (H2-H1)*60;
    }else if(M1==0 && M2==0 && H2<H1){
        minutos_dormidos += H2*60 + (24-H1)*60;
    }else{
        if (H1<H2){
            minutos_dormidos += (H2-H1-1)*60;
        }else if ((H2<H1) or (H2==H1 && M2<M1)){
            minutos_dormidos += H2*60;
            minutos_dormidos += (24-(H1+1))*60;
        }else if (H2==H1 && M1<M2){
            minutos_dormidos = 0;
            minutos_dormidos = M2-M1;
        }
    }

    if (H1==H2 && M1==M2){
        minutos_dormidos = 0;
    }
    //Faça o cálculo para H1:M1 e H2:M2

    cout << minutos_dormidos << endl;//Imprima a resposta

    minutos_dormidos=0;
}


}
