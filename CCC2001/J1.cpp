#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    for (int k=1; k<=n; k+=2){
        for (int i=0; i<k; i++){
            cout << '*';
        }
        for (int i=0; i<2*(n-k); i++){
            cout << ' ';
        }
        for (int i=0; i<k; i++){
            cout << '*';
        }
        cout << '\n';
    }
    for (int k=n-2; k>0; k-=2){
        for (int i=0; i<k; i++){
            cout << '*';
        }
        for (int i=0; i<2*(n-k); i++){
            cout << ' ';
        }
        for (int i=0; i<k; i++){
            cout << '*';
        }
        cout << '\n';
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}