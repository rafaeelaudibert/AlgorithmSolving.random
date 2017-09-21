#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    cin >> n;

    double numeros[n];

    for (int i=0; i<n; i++){
        cin >> numeros[i];
    }

    cout.precision(4);
    cout.setf(ios::fixed);

    for (int i=0; i<n; i++){
        cout << sqrt(numeros[i])<<endl;
    }

    return 0;

}

