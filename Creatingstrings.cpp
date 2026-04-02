#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string n;
    cin >> n;
    vector <string> ans;
    int count=0;
    sort(n.begin(),n.end());
    do{
        ans.push_back(n);
        count++;
    } while(next_permutation(n.begin(),n.end()));
    cout << count << "\n";
    for(int i=0 ;i<ans.size(); i++){
        cout << ans[i] << "\n";
    }
    return 0;
}