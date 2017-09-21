#include <iostream>
#include <vector>

#define INF 1000000000

using namespace std;

long n,v[100000];

void merge_sort(vector<int> &v){

	if(v.size()==1) return;

	vector<int> u1, u2;

	for(int i=0;i<v.size()/2;i++) u1.push_back(v[i]);
	for(int i=v.size()/2;i<v.size();i++) u2.push_back(v[i]);

	merge_sort(u1);
	merge_sort(u2);

	u1.push_back(INF);
	u2.push_back(INF);

	int ini1=0, ini2=0;

	for(int i=0;i<v.size();i++){

		if(u1[ini1]<u2[ini2]){
			v[i]=u1[ini1];
			ini1++;
		}else{
			v[i]=u2[ini2];
			ini2++;
		}
	}

	return;
}

int main(){
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> v[i];
    }

    cout << merge_sort(v);
}
