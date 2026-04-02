#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
    int a,b;
    cin >> a >> b;
    int pos=a;
    int steps=1;
    int sum=0;
    while(true){
        int zam=a+steps;
        if((pos<=b && zam>=b) || (pos>=b && zam<=b)){
            sum+=abs(b-pos);
            cout << sum;
            return 0;
        }
        sum+=abs(zam-pos);
        pos=zam;
        steps=(-1)*steps*2;
    }

    return 0;
}