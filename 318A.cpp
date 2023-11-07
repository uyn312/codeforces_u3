#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll nua = (n + 1) / 2;
    if(k <= nua) cout << 2 * k - 1;
    else cout << 2 *(k - nua);
    return 0;
}