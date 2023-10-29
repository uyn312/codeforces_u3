#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    int x, y, z;
    for(int i = 0; i < n; i++){
        int dem = 0;
        cin >> x;
        if(x) dem++;
        cin >> y;
        if(y) dem++;
        cin >> z;
        if(z) dem++;
        if(dem >= 2) cnt++;
    }
    cout << cnt;
    return 0;
}