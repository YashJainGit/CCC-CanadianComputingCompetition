#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int t=0, cnt=0;
    while (n!=0){
        n--;
        if (t==0){
            a = (a+1)%35;
            if (a==0) n+=30;
        }
        if (t==1){
            b = (b+1)%100;
            if (b==0) n+=60;
        }
        if (t==2){
            c = (c+1)%10;
            if (c==0) n+=9;
        }
        t = (t+1)%3;
        cnt++;
    }

    cout << "Martha plays " << cnt << " times before going broke.";
}

int main()
{
    //ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}