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
    vector<pair<int, int>> ansr;
    vector<pair<int, int>> ansl;
    
    vector<int> last((int)(3e5+1));
    fill(last.begin(), last.end(), -1);
    int l = 0;
    for (int i=0; i<n;){
        int j=i;
        while (b[i]==b[j]){
            last[a[j]] = j;
            //cout << last[b[i]] << ' ' << l << '\n';
            if (last[b[i]]>=l){
                t[j] = true;
                a[j] = b[j];
                l = last[b[j]];
            }
            j++;
        }
        l++;
        i=j;
    }
    /*
    cout << '\n';
    for (bool i:t){
       cout << i << ' ';
    }
    cout << '\n';
    */
   

    vector<int> first((int)(3e5+1));
    fill(first.begin(),first.end(), INT_MAX);
    int r = n-1;
    for (int i=n-1; i>=0;){
        int j=i;
        while (b[i]==b[j]){
            first[a[j]] = j;
            if (first[b[i]]<=r){
                t[j] = true;
                r = first[b[j]];
            }
            j--;
        }
        r--;
        i=j;
    }
    
    /*
    for (bool i:t){
       cout << i << ' ';
    }
    cout << '\n';
    */
    
    for (int i=0; i<n; i++){
        if (!t[i]){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n0\n";
    return;
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