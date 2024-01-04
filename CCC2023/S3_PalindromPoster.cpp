#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    
    if ((n==r)^(m==c)){
        cout << "IMPOSSIBLE\n";
        return;
    }

    int p[n][m] = {};

    for (int i=0; i<n; i++){
        if (i<r){
            for (int j=0; j<m; j++){
                p[i][j] = 1;
            }
        }else{
            p[i][m-1] = 2;
        }
    }


    for (int j=0; j<m; j++){
        if (j<c){
            for (int i=0; i<n; i++){
                p[i][j] = 1;
            }
        }else{
            p[n-1][j] = 2;
        }
    }

    p[n-1][m-1] = 3;



    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << (char)(p[i][j]+97) << ' ';
        }
        cout << '\n';
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
