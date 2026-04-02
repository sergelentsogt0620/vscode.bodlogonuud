#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);
    int k,n;
    cin >> k >> n;
    vector<vector<int>> pos(k,vector<int>(n+1));
    for(int i=0; i<k; i++){
        for(int j=0; j<n; j++){
            int cow;
            cin >> cow;
            pos[i][cow]=j;
        }
    }
    int count=0;
    for(int a=1; a<=n; a++){
        for(int b=1; b<=n; b++){
            bool yes = true;
            if(a==b) continue;
            for(int y=0; y<k; y++){
                if(pos[y][a]<pos[y][b]){
                    yes = false;
                    break;
                }
            } 
            if(yes) count++;
        }
       
    }
    cout << count;
    return 0;
}