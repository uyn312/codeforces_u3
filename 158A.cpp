#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    k--;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(v[i] && v[i] >= v[k]) cnt++;
    }
    cout << cnt;
    return 0;
}