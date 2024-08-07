#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x;
    cin >> x;

    vector<pair<string, string>> a(x);
    for (auto &i:a){
        cin >> i.first >> i.second;
    }

    int y;
    cin >> y;
    vector<pair<string, string>> b(y);
    for (auto &i:b){
        cin >> i.first >> i.second;
    }

    int g;
    cin >> g;
    unordered_map<string, pair<string, string>> groups;
    for (int i=0;i<g; i++){
        string d, e, f;
        cin >> d >> e >> f;
        groups[d] = {e, f};
        groups[e] = {d, f};
        groups[f] = {e, d};
    }

    int cnt = x;
    for (int i=0; i<x; i++){
        
        pair<string, string> pr = groups[a[i].first];
        if (pr.first == a[i].second){
            cnt--;
        }
        else if (pr.second == a[i].second){
            cnt--;
        }

    }

    for (int i=0; i<y; i++){
        pair<string, string> pr = groups[b[i].first];
        if (pr.first == b[i].second){
            cnt++;
        }
        else if (pr.second == b[i].second){
            cnt++;
        }

    }
    cout << cnt << '\n';

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}