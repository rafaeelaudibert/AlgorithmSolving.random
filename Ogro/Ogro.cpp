#include <iostream>
#include <algorithm>

using namespace std;

struct Premiacoes{
    int faixas_premiacoes, valor_premiacoes;
};


int main(){
    int ogros, faixas_premiacoes, forca_ogro;

    cin >> faixas_premiacoes >> ogros;

    int resp[ogros];

    Premiacoes premiacoes[faixas_premiacoes];

    premiacoes[0].faixas_premiacoes=0;
    premiacoes[faixas_premiacoes+1].faixas_premiacoes=1000000000;

    for (int i=1; i<=faixas_premiacoes - 1; i++){
        cin >> premiacoes[i].faixas_premiacoes;
    }
    for (int i=0; i<=faixas_premiacoes; i++){
        cin >> premiacoes[i].valor_premiacoes;
    }

    for (int j=1; j<ogros; j++){
        cin >> forca_ogro;
        for (int i=1; i<=faixas_premiacoes; i++){
            if (forca_ogro<premiacoes[i].faixas_premiacoes){
                resp[j-1]=premiacoes[j-1].valor_premiacoes;
            }
            if (forca_ogro>=premiacoes[faixas_premiacoes].faixas_premiacoes){
                resp[j-1]=premiacoes[faixas_premiacoes-1].valor_premiacoes;
            }
        }
    }

    for (int i=0; i<ogros; i++){
        cout << resp[i] << " ";
    }
}
