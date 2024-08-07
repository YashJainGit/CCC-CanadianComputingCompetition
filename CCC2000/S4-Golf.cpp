#include <bits/stdc++.h>

using namespace std;

void solve(){
    int d, c;
    cin >> d >> c;

    vector<int> clubs(c);
    vector<int> strokes(d*2);

    fill(strokes.begin(), strokes.end(), INT_MAX);
    strokes[0]=0;
    for (int &i:clubs){
        cin >> i;
        strokes[i] = 1;
    }

    for (int i=1; i<=d; i++){
        for (int j:clubs){
            if (i-j>=0 && strokes[i-j]!=INT_MAX){
                strokes[i] = min(strokes[i], strokes[i-j]+1);
            }
        }
    }

    if (strokes[d]!=INT_MAX){
        cout <<  "Roberta wins in " << strokes[d] << " strokes.\n";
    }
    else{
        cout << "Roberta acknowledges defeat.";
    }



    
    

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}