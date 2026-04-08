#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
vector <string> board(8);
bool column[8];
bool diago1[15];
bool diago2[15];
int ans=0;
void backtrack(int r){
    if(r == 8){
        ans++;
        return;
    }
    for(int c=0; c<8; c++){
        if(!column[c] && !diago1[r+c] && !diago2[r-c+7] && board[r][c]=='.'){
            column[c]=diago1[r+c]=diago2[r-c+7]=true;
            backtrack(r+1);
            column[c]=diago1[r+c]=diago2[r-c+7]=false;
        }
    }
}

int main(){
    for(int i=0; i<8; i++){ 
        cin >> board[i];
    }
    backtrack(0);
    cout << ans;
    return 0;
}