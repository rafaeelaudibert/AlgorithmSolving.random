#include <iostream>
#include <cstdlib>


using namespace std;

struct Valor{
    int a;
    int rand;
};

int main(){

    Valor valor[10000];

    for (int i=0; i<10000; i++){
        int saida = rand()%10000;
        cout << saida << endl;
        valor[i].a = i;
        valor[i].rand = saida;
    }

}
