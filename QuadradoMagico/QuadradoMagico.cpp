#include <iostream>
using namespace std;


int main(){

    int n, soma_linha=0, soma_coluna=0, diagonal_1=0, diagonal_2=0, soma_total=0, v=0;
    cin >> n;

    int matriz[n][n], armazenador_soma_linhas=0, armazenador_soma_colunas=0, numero_linhas=2*n + 2;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            soma_linha=soma_linha+matriz[i][j];
        }
        armazenador_soma_linhas=armazenador_soma_linhas+soma_linha;
        soma_linha=0;
    }

    for (int j=0; j<n; j++){
        for (int i=0; i<n; i++){
            soma_coluna=soma_coluna+matriz[i][j];
        }
        armazenador_soma_colunas=armazenador_soma_colunas+soma_coluna;
        soma_coluna=0;
    }

    for (int i=0; i<n; i++){
        diagonal_1=diagonal_1+matriz[i][i];
        }

    for (int j=0; j<n; j++){
        int i=n-1;
        diagonal_2=diagonal_2+matriz[i][j];
        i=i-1;
    }

    soma_total=soma_total+diagonal_1+diagonal_2+armazenador_soma_linhas+armazenador_soma_colunas;
    v=soma_total/numero_linhas;

    if(v==diagonal_1){
        cout<<v;
    }else{
        cout<<"-1";
    }

}

