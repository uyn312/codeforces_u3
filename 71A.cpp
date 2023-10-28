#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin >> s;
    if(s.size() <= 10) cout << s << endl;
    else{
    int cnt = 0;
    for(int i = 1; i < s.size() - 1; i++) cnt++;
    cout << s[0];
    cout << cnt;
    cout << s[s.size() - 1] << '\n';}
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