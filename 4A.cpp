#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w;
    cin >> w;
    if(w > 2 && w % 2 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}