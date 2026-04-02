#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
    int n,k;
    int maxcount=0;
    cin >> n >> k;
    vector <int> d(n);
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(abs(d[i]-d[j])<=k){
                count++;
            }
            else{
                break;
            }
        }
        maxcount=max(maxcount,count);
    }
    cout << maxcount;
    return 0;
}