#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int sbc = 2 * c;
    int hieu = abs(a - b);
    int t = hieu / sbc;
    int r = hieu % sbc;
    if(r != 0) cout << ++t << endl;
    else cout << t << endl;
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