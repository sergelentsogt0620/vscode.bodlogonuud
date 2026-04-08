#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int n;
        cin >> n;
        int l=1,big=3*n;
        while(l<=big){
            cout << l << " " << big-1 << " " << big << " ";
            l++;
            big-=2;
        }
        cout << "\n";
    }
    return 0;
}