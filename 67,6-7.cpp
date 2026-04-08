#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector <int> answer(t);
    for(int i=0; i<t; i++){
        int sum=0;
        vector<int> num(7);
        for(int j=0; j<7; j++){
            cin >> num[j];
        }
        sort(num.begin(),num.end());
        for(int j=0; j<7; j++){
            if(j<6) sum-=num[j];
            else sum+=num[j];
        }
        answer[i]=sum;
    }
    for(int i=0; i<t; i++){
        cout << answer[i] << "\n";
    }
    return 0;
}