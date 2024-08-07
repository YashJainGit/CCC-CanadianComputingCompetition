#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t, n;
    cin >> t >> n;

    while (t--){
        string s;
        cin >> s;

        vector<int> cnt(26);
        for (int i=0; i<n; i++){
            cnt[s[i]-'a']++;
        }

        bool flip=true;
        bool c1=true;
        for (int i=0; i<n-1; i+=1){
            if (!(cnt[s[i]-'a']==1 ^ cnt[s[i+1]-'a']==1)){
                c1 = false;
                break;
            }
        }
        
        if (c1){
            cout << "T\n";
        }else{
            cout << "F\n";
        }

    } 
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}