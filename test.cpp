#include <iostream>
#include <vector>
#include <algorithm>
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
            break;
        }
        sum+=abs(zam-pos);
        pos=zam;
        steps=(-1)*steps*2;
    }
    cout << sum;

    return 0;
}