#include<iostream>

using namespace std;

int main(){
    int n, minimo=1001, valor_atual;
    cin >> n;

    if (n==0){
        minimo=0;
    }
    for(int i=1; i<=n; i++){
        cin >> valor_atual;


      if(minimo>valor_atual){
            minimo=valor_atual;
            }
      if (minimo<0){
            minimo=0;
      }
    }
    cout<<minimo<<endl;

    return 0;
}
