#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    int x,y,m;
    cin >> x >> y >> m;
    int maxi=0;
    int first=0;
    while(x*first<=m){
        int sum=x*first;
        while(sum+y<=m){
            sum+=y;
        }
        maxi=max(maxi,sum);
        first++;
    }
    cout << maxi;

    return 0;
}