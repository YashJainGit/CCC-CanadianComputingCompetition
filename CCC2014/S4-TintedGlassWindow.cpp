#include <bits/stdc++.h>

using namespace std;

struct pane{
    int x1, y1;
    int x2, y2;
    int t;
};

void solve(){
    int n, t;
    cin >> n >> t;

    set<int> xs;
    set<int> ys;
    vector<pane> panes(n);
    for (pane &i:panes){
        cin >> i.x1 >> i.y1 >> i.x2 >> i.y2 >> i.t;
        
    

        xs.insert(i.x1);
        xs.insert(i.x2);
        ys.insert(i.y1);
        ys.insert(i.y2);
    }

    int an = ys.size();
    int am = xs.size();

    unordered_map<int, int> xm;
    vector<int> xv(an+1);
    int k=0;
    cout << "x's: ";
    for (int x:xs){
        xm[x] = k;
        xv[k] = x;
        k++;
        cout << x << ' ';
    }
    cout << '\n';

    xv[an] =100;
    for (int i=0; i<=an; i++){
        cout << xv[i] << ' ';
    }
    cout << '\n';

    unordered_map<int, int> ym;
    cout << "y's: " ;
    k=0;
    vector<int> yv(am+1);
    for (int y:ys){
        ym[y] = k;
        yv[k] = y;
        k++;
        cout << y << ' ';
    }
    yv[am] = 100;
    cout << '\n';

    for (int i=0; i<=am; i++){
        cout << yv[i] << ' ';
    }
    cout << '\n';

    vector<vector<int>> a(an, vector<int>(am));
    for (int i=0; i<n; i++){
        pane cur = panes[i];
        int j1 = xm[cur.x1];
        int j2 = xm[cur.x2];
        int i1 = ym[cur.y1];
        int i2 = ym[cur.y2];
        int t = cur.t;

        cout << i1 << ' ' << i2 << ' ' << j1 << ' ' << j2 << endl;
        for (int ii=i1; ii<=i2; ii++){
            
            a[ii][j1]+=t;
            a[ii][j2]-=t;

        }
    }

    for (int i=0; i<an; i++){
        for (int j=0; j<am; j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    int tint=0;
    long long cnt = 0;
    for (int i=0; i<an; i++){
        for (int j=0; j<am; j++){
            tint += a[i][j];
            if (tint>=t){
                cnt += (xv[i+1]-xv[i])*(yv[j+1]-yv[j]);
            }
            cout << (xv[i+1]-xv[i])*(yv[j+1]-yv[j]) << ' '; 
        }
        cout << endl;
    }
    cout << cnt << '\n';

}
    

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}