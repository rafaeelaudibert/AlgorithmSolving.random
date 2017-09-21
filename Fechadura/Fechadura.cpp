#include <iostream>
#include <algorithm>

using namespace std;

int n, resto=1, qtde;


int main(){

    cin >> n;

    while (resto!=0){
            if (n>=100){
                qtde++;
                n=n-100;
            }else if (n>=50){
                qtde++;
                n=n-50;
            }else if (n>=25){
                qtde++;
                n=n-25;
            }else if (n>=10){
                qtde++;
                n=n-10;
            }else if (n>=5){
                qtde++;
                n=n-5;
            }else if (n>=1){
                qtde++;
                n=n-1;
            }else{
                resto=0;
        }

    }

    cout << qtde << endl;

    return 0;
}
