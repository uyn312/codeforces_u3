#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int ok = 1;
    int dem = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1])dem++;
        else {
            if(dem >= 7){
                cout << "YES\n";
                ok = 0;
                break;
            }
            else {
                dem = 1;
            }
        }
    }
    if( ok && dem >= 7){
        cout << "YES\n";
        ok = 0;
    }
    if(ok) cout << "NO\n";
    return 0;
}