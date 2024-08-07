#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    vector<vector<int>> tri(n);

    for (int i=0; i<n; i++){
        for (int j=0;  j<=i; j++){
            int x;
            cin >> x;
            tri[i].push_back(x);
        }
    }

    for (int i=0; i<k; i++){
        

    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}