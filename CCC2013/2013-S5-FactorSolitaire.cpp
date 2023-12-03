#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, cost=0;
    cin >> N;
    while (N > 1) {
        cout << N << ' ';
        for (int i = 2; i <= N; i++){
            if (N%i==0) {
                N -= N/i;
                cost += i-1;
                break;
            }
        }
    }
    cout << cost;
    return 0;
}