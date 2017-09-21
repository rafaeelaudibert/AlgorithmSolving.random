#include <iostream>
#include <algorithm>

using namespace std;

struct Pedidos{
    int tempo_demora, tempo_entrega;
};

bool compara (Pedidos a, Pedidos b){
    return a.tempo_entrega < b.tempo_entrega;
}

int n, maior_atraso=0, atraso, tempo_atual=0;

int main (){
    cin >> n;

    Pedidos pedidos[n];

    for (int i=1; i<=n; i++){
        cin >> pedidos[i].tempo_demora >> pedidos[i].tempo_entrega;
    }

    sort(pedidos+1, pedidos+n+1, compara);

    for (int i=1; i<=n; i++){
        tempo_atual=tempo_atual+pedidos[i].tempo_demora;
        atraso=tempo_atual-pedidos[i].tempo_entrega;

        if (atraso>maior_atraso){
            maior_atraso=atraso;
        }
        atraso=0;
    }

    cout << maior_atraso;
}
