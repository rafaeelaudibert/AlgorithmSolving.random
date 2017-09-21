#include <iostream>
#include <algorithm>

using namespace std;

struct Tempo{
    int carro;
    int tempo;
};

bool ComparaTempos(Tempo a, Tempo b){
    return a.Tempo < b.Tempo;
}

int main(){
    int carros, voltas;

    cin >> carros >> voltas;

    Tempo tempo[carros];
    int corrida[carros][voltas];
    int soma_tempo=0;

    for (int i=0; i<carros; i++){
        for (int j=0; j<voltas; j++){
            cin >> corrida[i][j];
        }
    }

    for (int i=1; i<carros; i++){
        for (int j=0; j<voltas; j++){
            soma_tempo=soma_tempo+corrida[i][j];
        }
        tempo.carro[i]=i+1;
        tempo.tempo[i]=soma_tempo;
        soma_tempo=0;
    }

    sort(tempo.tempo, tempo.tempo+carros, ComparaTempos);

}
