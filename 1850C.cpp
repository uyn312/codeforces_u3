#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    char c[8][8];
    int ok = 1, hang , cot;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> c[i][j];
            if(ok && c[i][j] >= 'a' && c[i][j] <= 'z'){
                ok = 0;
                hang = i;
                cot = j;
            }
        }
    }
    vector<char>v;
    for(int i = hang ; i < 8; i++){
        if(c[i][cot] >= 'a' && c[i][cot] <= 'z'){
            v.push_back(c[i][cot]);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        solve();
        cout << '\n';
    }
    return 0;
}