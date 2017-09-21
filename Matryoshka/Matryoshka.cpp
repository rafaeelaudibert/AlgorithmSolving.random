#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, qtde_bonecas_trocadas=0;
    cin >> n;

    int bonecas[n], bonecas_conferencia[n], altura_bonecas_trocadas[n];

    for (int i=0; i<n; i++){
        cin >> bonecas[i];
        bonecas_conferencia[i]=bonecas[i];
    }

    sort(bonecas, bonecas+n);

    for (int i=0; i<n; i++){
        if (bonecas_conferencia[i]!=bonecas[i]){
            qtde_bonecas_trocadas++;
            altura_bonecas_trocadas[qtde_bonecas_trocadas-1]=bonecas_conferencia[i];
        }
    }

    cout << qtde_bonecas_trocadas << endl;

    sort(altura_bonecas_trocadas,altura_bonecas_trocadas+qtde_bonecas_trocadas);

    for (int i=0; i<qtde_bonecas_trocadas; i++){
        cout << altura_bonecas_trocadas[i] << " ";
    }

    cout << endl;
}
