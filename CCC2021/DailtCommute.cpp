#include <bits/stdc++.h>

using namespace std;

int n, w, d;
vector<vector<int>> adj;
vector<int> mw;

int dfs(int i){
    if (mw[i]!=-1){
        return mw[i]; 
    }

    mw[i] = INT_MAX;
    int best = INT_MAX;
    for (int j=0; j<adj[i].size(); j++){
        best = min(best, dfs(adj[i][j]));
    }
    if (best==INT_MAX){
        mw[i] = INT_MAX;
    } 
    else{
        mw[i] = best+1;
    }
    return mw[i];
}

void solve(){
    cin >> n >> w >> d;

    adj.resize(n);
    mw.resize(n);
    fill(mw.begin(), mw.end(), -1);

    for (int i=0; i<w; i++){
        int x, y;
        cin >> x >> y;

        adj[x-1].push_back(y-1);
    }
    
    for (int i=0; i<n; i++){
        int d = dfs(i);
    }

    for (int i=0; i<n; i++){
        cout << mw[i] << ' ';
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