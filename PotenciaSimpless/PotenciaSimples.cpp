#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double  l, a, p, r,  d1, d2;

   cin >> l >> a >> p >> r;
   d1 = sqrt(pow(l, 2) + pow(a, 2));
   d2 = sqrt(pow(d1, 2) + pow(p, 2));

   if (d2 < (2*r)){
       cout << "S" << endl;
   } else {
       cout << "N" << endl;
   }

}
