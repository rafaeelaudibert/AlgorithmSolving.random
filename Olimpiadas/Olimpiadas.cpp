#include <iostream>
#include <algorithm>

using namespace std;

struct Tabela{
    int pais;
    int ouro;
    int prata;
    int bronze;
    };

bool ComparaMedalhas(Tabela a, Tabela b){
    if (a.ouro > b.ouro){
        return a.ouro < b.ouro;
    }else if (b.ouro > a.ouro){
        return b.ouro < a.ouro;
    }else if (a.prata > b.prata){
        return a.prata < b.prata;
    }else if (b.prata > a.prata){
        return b.prata < a.prata;
    }else if (a.bronze > b.bronze){
        return a.bronze < b.bronze;
    }else if (b.bronze > a.bronze){
        return b.bronze < a.bronze;
    }else{
        return a.bronze < b.bronze;
    }
    }


int main(){
    int paises, modalidades, ouro, prata, bronze;

    cin >> paises >> modalidades;

    Tabela tabela[paises];

    for (int i=0; i<paises; i++){
        tabela[i].pais=i+1;
    }

    for (int i=0; i<modalidades; i++){
        cin >> ouro >> prata >> bronze;
        tabela[ouro-1].ouro++;
        tabela[prata-1].prata++;
        tabela[bronze-1].bronze++;

    }

    sort(tabela, tabela+paises, ComparaMedalhas);

    for (int i=0; i<paises; i++){
        cout << tabela[i].pais << " ";
    }

    return 0;
}
