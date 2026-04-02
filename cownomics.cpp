#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
using namespace std;
int main(){
    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);
    int n,m;
    cin >> n >> m;
    vector<string> s(n),p(n);
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<n; i++) cin >> p[i];
    int count=0;
    for(int j=0; j<m; j++){
        set<char> spotty,plain;
        for(int i=0; i<n; i++){
            spotty.insert(s[i][j]);
            plain.insert(p[i][j]);
        }
        bool isok = true;
        for(char c : spotty){
            if(plain.count(c)){
                isok=false;
                break;
            }
        }
        if(isok) count++;
    }
    cout << count;
    return 0;
}