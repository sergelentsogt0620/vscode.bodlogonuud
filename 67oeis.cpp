#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        long long ans;
        cin >> n;
        for(int i=1; i<=n; i++){
            cout <<1LL * i * (i+1) << " ";
        }
        cout << "\n";
    }
    return 0;
}