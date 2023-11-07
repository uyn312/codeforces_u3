#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin >> s;
   
    char tmp = s[0];
    if(tmp == '='){
        int ok = 1;
        for(int i = 1; i < s.size(); i++){
            if(tmp == '=' && s[i] != tmp){
                tmp = s[i];
            }
            else if(tmp != '=' && s[i] != tmp && s[i] != '='){
                cout << '?' << '\n';
                ok = 0;
                break;
            }
        }
        if(ok) cout << tmp << endl;
    }
    else {
        int ok = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] != '=' && s[i] != tmp){
                cout << '?' << '\n';
                ok = 0;
                break;
            }
        }
        if(ok) cout << tmp << endl;
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
    }
    return 0;
}