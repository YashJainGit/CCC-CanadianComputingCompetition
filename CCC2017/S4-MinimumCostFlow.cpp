#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
using ll=long long;


struct pipe{
    ll i;
    ll a, b;
    ll c;
};

void solve(){
    int n, m, d;
    cin >> n >> m >> d;

    vector<pipe> pipes(m);

    for (int i=0; i<m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        pipes[i] = {i, a-1, b-1, c}; 
    }

    sort(pipes.begin(), pipes.end(), [&](pipe a, pipe b){ return (a.c<b.c)||(a.c==b.c && a.i<b.i);});
    //for (int i=0; i<m; i++){
    //    cout << pipes[i].a << ' ' << pipes[i].b << '\n';
    //}

    vector<ll> p(n);
    vector<ll   > s(n);
    for (int i=0; i<n; i++){
        p[i] = i;
        s[i] = 1;
    }

    ll ans=0;
    ll tot=0;
    ll i=0;
    while (tot<n-1){
        ll a = pipes[i].a;
        ll b = pipes[i].b;
        ll c = pipes[i].c;
        ll ii = pipes[i].i;
        

        while (p[a] != a){
            a = p[a];
        }
        while (p[b] != b){
            b = p[b];
        }

        if (a!=b){
            tot++;
            if (ii>=n-1){
                ans++;
            }    
            if (s[a]<s[b]) swap(a, b);
            p[b] = a;
            s[a] += s[b];
        }
        i++;
    }

    cout << ans-d << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
=======

void solve(){
     
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
>>>>>>> 359b793bb23791ddb56ed3af85bf56c195a06b75
}