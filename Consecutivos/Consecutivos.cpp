#include <iostream>
#include <algorithm>

using namespace std;

bool compara (int a,int b){
     a < b;
}

bool compara2 (int a,int b){
     a > b;
}

int main(){
    int n, k=0;
    cin >> n;

    int sequencia[n], maximo[n];
    maximo[0]=1;

    for (int i=0; i<n; i++){
        cin >> sequencia[i];
    }

    sort(sequencia,sequencia+n,compara);

    for (int i=1; i<n; i++){
        if (sequencia[i]==sequencia[i-1]){
            maximo[k]=maximo[k]+1;
        }else if(sequencia[i]!=sequencia[i-1]){
            k++;
            cout<<k<<endl;
            maximo[k]=1;
        }
    }

    sort(maximo, maximo+n, compara2);

    cout << maximo[0] << endl;


}
