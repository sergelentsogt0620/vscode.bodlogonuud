#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int n,maxd=0;
    cin >> n;
    vector <int> x(n),y(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    for(int i=0; i<n; i++){
        cin >> y[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            maxd = max(maxd,dy*dy+dx*dx);
        };
    }
    cout << maxd;

    return 0;
}