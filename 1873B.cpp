#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int mi = 10;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(mi > a[i]){
            mi = a[i];
        }
    }
    int pro = 1, ok = 0;
    for(int i = 0; i < n; i++){
        if(ok == 0 && a[i] == mi){
            pro *= (a[i] + 1);
            ok = 1;
        }
        else{
            pro *= a[i];
        }
    }
    cout << pro << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int tc;
    //cin >> tc;
    //while(tc--){
        solve();

    //}
    return 0;
}