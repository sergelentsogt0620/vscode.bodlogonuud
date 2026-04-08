#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int count=0;
    vector<vector<int>> cow(n,vector<int>(3));
    vector<vector<int>> condi(m,vector<int>(4));
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> cow[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<4; j++){
            cin >> condi[i][j];
        }
    }
    recurse(cow,condi,count);
    return 0;
}