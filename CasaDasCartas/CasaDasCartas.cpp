#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    int empresas[n], sobra_empresas[n], valor_deputados[n];

    for (int i=0; i<n; i++){
        cin >> empresas[i];
        sobra_empresas[i]=empresas[i]%m;
        valor_deputados[i]=empresas[i]/m;
    }

    sort(sobra_empresas,sobra_empresas+n);

    for (int i=0; i<n; i++){
        cout << sobra_empresas[i];
    }

}
