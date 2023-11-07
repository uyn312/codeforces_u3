#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int tong = 0, cnt = 0;
    sort(a, a + n);
    for(int i = n - 1; i >= 0; i--){
        tong += a[i];
        cnt++;
        if(tong > sum / 2){
            break;
        }
    }
    cout << cnt << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}