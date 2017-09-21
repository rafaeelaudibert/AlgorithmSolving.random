#include <iostream>

using namespace std;

int main(){
    int h=0, p=0, f=0, d=0;

    cin >> h >> p >> f >> d;

    while (int i=0){
        if (d==-1){
            if (f!=0){
                f--;
                cout << f << endl;
            }else{
                f=15;
                cout << f << endl;
            }
        }else if(d==1){
            if (f!=15){
                f++;
                cout << f << endl;
            }else{
                f=0;
                cout << f << endl;
            }
        }

        if (f==h){
            cout << "S" << endl;
            break;
        }else if(f==p){
            cout << "N" << endl;
            break;
        }

    }

}
