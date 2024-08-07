#include <bits/stdc++.h>

using namespace std;

void solve(){   


    int c, r;
    cin >> c >> r;

    int x=0, y=0;
    int cx, cy;
    cin >> cx >> cy;
    while (cx!=0 || cy!=0){
        x+=cx;
        y+=cy;

        x = max(0, min(x, c));
        y = max(0, min(y, r));

        cout << x << ' ' << y << '\n';
        cin >> cx >> cy;
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}