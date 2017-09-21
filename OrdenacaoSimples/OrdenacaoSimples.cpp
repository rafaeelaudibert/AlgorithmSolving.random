#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ordenacao[n];

    for (int i=0; i<n; i++){
        cin >> ordenacao[i];
    }

    sort(ordenacao, ordenacao+n);

    for (int i=0; i<n; i++){
        cout << ordenacao[i] << " ";
    }

    cout << endl;

    return 0;

}
