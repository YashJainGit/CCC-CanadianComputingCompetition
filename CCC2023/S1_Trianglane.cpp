#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    bool a[n], b[n];
    for (bool &i:a) cin >> i;
    for (bool &i:b) cin >> i;

    int c=0;
    for (int i=0; i<n; i++){
        int x=a[i], y=b[i];
        
        if (a[i]){
            c+=3;
            if (i!=0 && a[i-1]) c-=2;
        } 
        if (b[i]){
            c+=3;
            if (i!=0 && b[i-1]) c-=2;
        } 
        if (a[i] && b[i] && i%2==0) c-=2;
    }

    cout << c << '\n';


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
