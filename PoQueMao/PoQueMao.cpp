#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int doces, pqm[3];

    cin >> doces;

    for (int i=0; i<3; i++){
        cin >> pqm[i];
    }

    sort(pqm, pqm+3);

    if(pqm[0]+pqm[1]+pqm[2]<=doces){
        cout << 3;
    }else if (pqm[0]+pqm[1]<=doces){
        cout << 2;
    }else if (pqm[0]<=doces){
        cout << 1;
    }else{
        cout << 0;
    }

    return 0;

}
