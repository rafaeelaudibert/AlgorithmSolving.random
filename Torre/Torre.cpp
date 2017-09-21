#include<iostream>
using namespace std;

int main (){
    int m;
    cin >> m;

    int matriz[m][m], maior=0, soma_linhas=0, soma_colunas=0, soma_total=0, valor=0;

    for (int i=0; i<m; i++){
        for (int j=0; j<m; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i=0; i<m; i++){
        for (int j=0; j<m; j++){
            soma_linhas=0;
            soma_colunas=0;
            for (int k=0; k<m; k++){
                valor=matriz[i][k];
                soma_linhas=soma_linhas+valor;
                }
            for (int k=0; k<m; k++){
                valor=matriz[k][j];
                soma_colunas=soma_colunas+valor;
            }
            soma_total=soma_linhas+soma_colunas-(2*matriz[i][j]);
            cout << soma_total << endl;
            if (maior<soma_total){
                maior=soma_total;
            }
            soma_total=0;
        }

    }

    cout << maior;
}




