#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<double> a(n);

    for (double &i:a){
        cin >> i;
    } 

    int com=0;
    while (com!=77){
        cin >> com;
        if (com==99){
            int i;
            double f;
            cin >> i >> f;
            f/=100;
            a.insert(a.begin()+i, (a[i-1]*(1.0-f)));
            a[i-1]*=f;
        }
        else if (com==88){
            int i;
            cin >> i;

            a[i-1] += a[i];
            a.erase(a.begin()+i);
        }
    }
    for (double &i:a){
        cout << i << ' ';
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout << setprecision(1);

    
    solve();
    
    return 0;
}