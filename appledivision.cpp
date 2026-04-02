#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll= long long;
long long total=0;
long long recurse(ll index, ll sum, ll n, vector<long long>& p){
    if(index == n){
        return abs(total - sum*2);
    }
    return min(
        recurse(index+1,sum+p[index],n,p),
        recurse(index+1,sum,n,p));
}
int main(){
    int n;
    cin >> n;
     vector <long long> p(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
        total+=p[i];
    }
    cout << recurse(0,0,n,p);

    return 0;
}