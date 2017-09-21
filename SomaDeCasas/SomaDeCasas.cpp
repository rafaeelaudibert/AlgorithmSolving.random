#include <iostream>
#include <algorithm>

using namespace std;

int casas[100100], n, soma, v[2];

int buscab1(int soma){
    int ini=casas[0], fim=casas[n-1], meio;

    while (ini<=fim){
            meio=(ini+fim)/2;
        if (casas[meio]+casas[meio-1]==soma){
            return meio;
        }else if (casas[meio]+casas[meio+1]==soma){
            return meio;
        }else if (casas[meio]+casas[meio-1]>soma){
            fim=meio-1;
        }else if (casas[meio]+casas[meio-1]<soma){
            ini=meio+1;
        }
    }
}

bool compara(int a, int b){
    a < b;
}

int buscab2(int soma){
    int ini=casas[0], fim=casas[n-1], meio;

    while (ini<=fim){
            meio=(ini+fim)/2;
        if (casas[meio]+casas[meio-1]==8){
            return meio-1;
        }else if (casas[meio]+casas[meio+1]==soma){
            return meio+1;
        }else if (casas[meio]+casas[meio-1]>soma){
            fim=meio-1;
        }else if (casas[meio]+casas[meio-1]<soma){
            ini=meio+1;
        }
    }
}
int main(){

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> casas[i];
    }

    cin >> soma;

    v[0]=buscab1(soma);
    v[1]=buscab2(soma);

    sort(v,v+1, compara);

    cout << v[0] << " " << v[1];

    return 0;
}
