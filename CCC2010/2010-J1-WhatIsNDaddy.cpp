#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, count=0;
    cin >> n;

    for (int i=0; i<n; i++){
        if (i<=n-i && n-i<=5){
            count++;
        }
    }

    cout << count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}