#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    } 
    vector<int> b(n);
    for (int &i:b){
        cin >> i;
    } 

    vector<bool> t(n);
    vector<pair<int, int>> ansl;
    vector<pair<int, int>> ansr;

    for (int i=0; i<n; i++){
        if (a[i]==b[i]){
            t[i] = true;
        }
        else if (i!=0 && a[i-1]==b[i]){
            ansl.push_back({i-1, i});
            a[i] = b[i];
            t[i] = true;
        }
    }
    for (int i=n-1; i>=0; i--){
        if (a[i]==b[i]){
            t[i] = true;
        }
        else if (i!=n-1 && a[i+1]==b[i]){
            ansr.push_back({i, i+1});
            a[i] = b[i];
            t[i] = true;
        }
    }

    //for (bool i:t){
    //    cout << i << ' ';
    //}
    //cout << '\n';
    for (int i=0; i<n; i++){
        if (!t[i]){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    cout << ansl.size()+ansr.size() << '\n';
    for (int i=0; i<ansl.size(); i++){
        cout << "R " << ansl[i].first; 
        while (i<ansl.size() && ansl[i+1].first==ansl[i].second){
            i = i+1;
        }
        cout << " " << ansl[i].second << '\n';
    }
    for (int i=0; i<ansr.size(); i++){
        cout << "L ";
        int tt = ansr[i].second; 
        while (i<ansr.size() && ansr[i+1].second==ansr[i].first){
            i = i+1;
        }
        
        cout << ansr[i].first << " " << tt << '\n';
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}