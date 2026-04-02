#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<string,int>> d(n);
    for(int i=0; i<n; i++){
        cin >> d[i].first >> d[i].second;
    }
    int ans=n;
    for(int i=0; i<n; i++){
        int pos=d[i].second;
        int lies=0;
        for(int j=0; j<n; j++){
            if(d[j].first=="L"){
                if(pos>d[j].second) lies++;
            }
            else{
                if(pos<d[j].second) lies++;
            }
        }
        ans=min(ans,lies);
    }
    cout << ans;
    return 0;
}