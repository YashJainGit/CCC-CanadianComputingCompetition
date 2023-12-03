#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector<int> trains(N), branch;
    for (int i=N-1; i>=0; i--){
        cin >> trains[i];
    }
    for (int cur=1, t=0, b=0; cur<N;){
        if (trains[t]==cur){
            t++;
            cur++;
        }else if (branch.size() && branch[0]==cur){
            branch.erase(branch.begin());
            cur++;
        }else{
            if (t==N){
                cout << "N\n";
                return;
            }
            branch.insert(branch.begin(), trains[t]);
            t++;
        }
    }
    cout << "Y\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (; T>0; T--){
        solve();
    }
    return 0;
}