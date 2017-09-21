#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int N){
    if (N<=1){
        return 1;
    }
    return N * fatorial(N-1);
}

int main(){
    int n;

    cin >> n;

    cout << fatorial(n) << endl;

    return 0;
}
