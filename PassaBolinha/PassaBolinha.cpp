#include <iostream>
using namespace std;

int main (){
    int n, linha_inicio, coluna_inicio, linha_atual, coluna_atual, bandeiras;
    cin >> n;

    int matriz[n][n];

    cin >> linha_inicio >> coluna_inicio;
    linha_atual=linha_inicio;
    coluna_atual=coluna_inicio;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i=0; i<4; i++){
        if (matriz[linha_atual][coluna_atual+1]>matriz[linha_atual][coluna_atual]){
        coluna_atual=coluna_atual+1;
        cout<<1<<endl;
        }else if (matriz[linha_atual+1][coluna_atual]>matriz[linha_atual][coluna_atual]){
        linha_atual=linha_atual+1;
        cout<<2<<endl;
        }else if (matriz[linha_atual][coluna_atual-1]>matriz[linha_atual][coluna_atual]){
        coluna_atual=coluna_atual-1;
        cout<<3<<endl;
        }else if (matriz[linha_atual-1][coluna_atual]>matriz[linha_atual][coluna_atual]){
        linha_atual=linha_atual-1;
        cout<<4<<endl;
        }
    }
}
