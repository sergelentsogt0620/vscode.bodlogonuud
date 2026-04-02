#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> d(n);
    int count=0;
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=d[j];
            int div=j-i+1;
            if(sum% div!=0) continue;
            int avg=sum/div;
            for(int k=i; k<=j; k++){
                if(d[k]==avg){
                    count++;
                    break;
                }
            }
        }
    }
    cout << count;
    return 0;
}