#include <iostream>

using namespace std;

bool eh_primo(int x){
	int div;
	for (int i=1; i<=x; i++){
        if (x%i == 0){
            div=div+1;
        }
	}
	if(div==2){
        return 1;
	}else{
        return 0;
        }
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout<<"S"<<"\n";
	}else{
		cout<<"N"<<"\n";
	}

	return 0;
}
