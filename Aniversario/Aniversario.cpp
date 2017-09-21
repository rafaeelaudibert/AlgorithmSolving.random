#include <iostream>

using namespace std;

int main(){
    int dia_nasc, mes_nasc, ano_nasc, dia_hoje, mes_hoje, ano_hoje, anos=0, dias=0, meses=0, horas=0, minutos=0, segundos=0;

    cout << "Dia de Nascimento: ";
    cin >> dia_nasc;
    cout << "Mes de Nascimento: ";
    cin >> mes_nasc;
    cout << "Ano de Nascimento: ";
    cin >> ano_nasc;
    cout << "Dia Atual: ";
    cin >> dia_hoje;
    cout << "Mes Atual: ";
    cin >> mes_hoje;
    cout << "Ano Atual: ";
    cin >> ano_hoje;

    //Ano de Nascimento

    for (int i=12; i>mes_nasc; i--){
        if (i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12){
            dias += 31;
        }else if(i==4 or i==6 or i==9 or i==11){
            dias += 30;
        }else if(i==2 && ano_hoje%4==0){
            dias +=29;
        }else if(i==2){
            dias +=28;
        }
    }

    if (mes_nasc==1 or mes_nasc==3 or mes_nasc==5 or mes_nasc==7 or mes_nasc==8 or mes_nasc==10 or mes_nasc==12){
            dias += 31-dia_nasc;
        }else if(mes_nasc==4 or mes_nasc==6 or mes_nasc==9 or mes_nasc==11){
            dias += 30-dia_nasc;
        }else if(mes_nasc==2 && ano_hoje%4==0){
            dias +=29-dia_nasc;
        }else if(mes_nasc==2){
            dias +=28-dia_nasc;
        }

    //Anos no meio

    for (int i=ano_nasc+1; i<ano_hoje; i++){
        if (i%4==0){
            dias=dias+366;
        }else{
            dias=dias+365;
        }
    }

    //Esse ano

    for (int i=1; i<mes_hoje; i++){
        if (i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12){
            dias += 31;
        }else if(i==4 or i==6 or i==9 or i==11){
            dias += 30;
        }else if(i==2 && ano_hoje%4==0){
            dias +=29;
        }else if(i==2){
            dias +=28;
        }
    }

    dias +=dia_hoje;

    //Imprimindo na tela

    anos = dias/365;
    meses = anos*12;
    horas = dias*24;
    minutos = horas*60;
    segundos = minutos*60;

    cout << "Você ja viveu: " << anos << " anos!" << endl;
    cout << "Ou: " << meses << " meses!" << endl;
    cout << "Ou: " << dias << " dias!" << endl;
    cout << "Ou: " << horas << " horas!" << endl;
    cout << "Ou: " << minutos << " minutos!" << endl;
    cout << "Ou: " << segundos << " segundos!" << endl;

}
