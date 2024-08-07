#include <bits/stdc++.h>

using namespace std;
using ll=long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }

    ll cnt=0;
    for (int i=0; i<n/2; i++){
        if (a[i] == a[(i+n/2)%n]){
            cnt+=2;
        }
    }

    cout << cnt << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    int t=0;
    cin >> t >> n;
    while (t--){
        solve();
    }

    return 0;
}