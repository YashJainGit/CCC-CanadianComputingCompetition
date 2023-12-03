#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int curW=0, maxW, N;
    cin >> maxW >> N;
    int trains[N];
    for (int i=0; i<N; i++){
        cin >> trains[i];
        curW+=trains[i];
        if (i-4 >=0){
            curW-=trains[i-4];
        }
        if (curW>maxW){
            cout << i;
            return 0;
        }
    }
    cout << N;

    return 0;
}