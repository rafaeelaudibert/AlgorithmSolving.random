#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, maior=0;
    double maior_valor, calculo;
    cin >> n;

    double bacterias[n][2];

    for (int i=0; i<n;i++){
        for (int j=0; j<2; j++){
            cin >> bacterias[i][j];
        }
    }

    for (int i=0; i<n; i++){
        calculo=pow(bacterias[i][0],bacterias[i][1]);
        if (maior<calculo){
            maior_valor=calculo;
            maior=i;
            }
    }

    cout << maior;

}
