#include <iostream>

// Transforma a primeira lera em maiuscula

using namespace std;

string title(string F){
	for (int i=0; i<F.size(); i++){
        if (F[i]>=65 && F[i]<=90){
            F[i]=F[i]+32;
        }
	}

	F[0]=F[0]-32;

	for (int i=1; i<F.size(); i++){
        if (F[i-1]==32){
            F[i]=F[i]-32;
        }
	}

	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}
