#include<iostream>
#include<cmath>
using namespace std;

int problema(int N){
    int qtde=0;
    if (N==1){
        return qtde;
    }

    if (N%2==0){
        return N/2;
        qtde=qtde+1;
    }
    if (N%2==1){
        return 3*N + 1;
        qtde=qtde+1;
    }

}

int main(){
    int n;
    cin >> n;

    cout << problema(n) << endl;

    return 0;
}
