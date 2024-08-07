#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    string s;
    cin >> s;
    remove(s.begin(), s.end(), '-');
    int n=s.size();
    map<char, int> a ={{'1',1}, {'2',2}, {'3',3}, {'4',4}, {'5',5}, {'6',6}, {'7',7}, {'8',8}, {'9',9},
                       {'A',2}, {'B',2}, {'C',2}, {'D',3}, {'E',3}, {'F',3}, {'G',4}, {'H',4}, {'I',4},
                       {'J',5}, {'K',5}, {'L',5}, {'M',6}, {'N',6}, {'O',6}, {'P',7}, {'Q',7}, {'R',7},
                       {'S',7}, {'T',8}, {'U',8}, {'V',8}, {'W',9}, {'X',9}, {'Y',9}, {'Z',9}};

    for (int i=0; i<10; i++){
        cout << a[s[i]];
        if (i==2 || i==5){
            cout << '-';
        }
    }
    cout << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}