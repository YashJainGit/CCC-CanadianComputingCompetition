#include <bits/stdc++.h>

using namespace std;

void solve(){
    string n, h;
    cin >> n >> h;

    vector<itn>

    int j=0, i=0;
    while (j<26){
        
        int f=0;
        for (int k=1; k<=i; k++){
            if (i%k==0){
                f++;
            }
        }
        if (f==2){
            cout << i << ", ";
            j++;
        }
        i++;
    }

    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}