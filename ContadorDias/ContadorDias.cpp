#include <iostream>

using namespace std;

int main(){
    int dia, mes, ano, dias_passados=0;

    cout << "Insira o dia, mes e ano separado por um espaco:" << endl << "Formato: 'dd/mm/yyyy'" << endl;
    cin >> dia >> mes >> ano;

    for (int i=1; i<mes; i++){
        if (i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12){
            dias_passados += 31;
        }else if(i==4 or i==6 or i==9 or i==11){
            dias_passados += 30;
        }else if((i==2 && ano%4==0) or (i==2 && ano%1000==0)){
            dias_passados +=29;
        }else if(i==2){
            dias_passados +=28;
        }
    }



    cout << "Dias passados ate hoje, nesse ano: " << dias_passados + dia << endl;

    return 0;
}
