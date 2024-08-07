#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;
    
    vector<pair<double, double>> a(n);

    for (pair<double,double> &i:a){
        cin >> i.first >> i.second;
    }
    
    sort(a.begin(), a.end());

    for (int i=0; i<n; i++){
        
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}