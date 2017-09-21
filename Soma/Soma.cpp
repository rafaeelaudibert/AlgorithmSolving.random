#include <iostream>
#include <cmath>

using namespace std;

int soma(int N){
    if (N==1){
        return 1;
    }
    return N + soma(N-1);
}

int main(){
    int n;

    cin >> n;

    cout << soma(n) << endl;

    return 0;
}
