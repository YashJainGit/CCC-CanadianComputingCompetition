#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    if (k<n){
        cout << -1 << '\n';
        return;
    }

    k-=n;

    vector<int> ans(n);
    int r=0;
    int a=0; 
    for (int i=0; i<n; i++){
        if (k==0){
            ans[i] = r;
            continue;
        }
        cout << a << ' ' << k << '\n';
        if(a<=k){
            k-=a;
            ans[i] = r+1;
        }
        else{
            ans[i] = ((r+m+1)-(a-k))%m;
            k=0;
        }
        a = min(a+1, m);
        r = (r+1)%m;
    }

    cout << k << '\n';
    if (k>0){
        cout << -1 << '\n';
    }
    for (int i:ans){
        cout << i << ' ';
    }
    cout << '\n';

    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}