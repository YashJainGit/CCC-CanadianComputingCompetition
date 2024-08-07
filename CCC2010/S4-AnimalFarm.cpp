#include <bits/stdc++.h>

using namespace std;

struct edge{
    int a;
    int b;
    int w;
};

void solve(){

    int n;
    cin >> n;

    map<pair<int, int>, int> m;
    vector<edge> e;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;

        vector<int> p(x);
        vector<int> w(x);
        for (int &j:p)
            cin >> j;
        for (int &j:w)
            cin >> j;

        for (int j=0; j<x; j++){
            pair<int, int> pr = {p[j], p[(j+1)%x]};
            if (pr.first>pr.second) swap(pr.first, pr.second);
            cout << pr.first << ' ' << pr.second << ' ';
            if (m.find(pr)!=m.end()){
                e[m[pr]].b = i;
                cout << "f\n";
            }
            else{
                cout << "nf\n";
                e.push_back(edge{i, -1, w[j]});
                m[pr] = e.size()-1;
            }
        }
        cout << endl << 'n' << endl;
    }

    for (edge i:e){
        if (i.b!=-1){
            cout << i.a << ' ' << i.b << ' ' << i.w << '\n';
        }
    }



}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}