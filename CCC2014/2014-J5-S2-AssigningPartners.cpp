#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string group1[N];
    for (int i=0; i<N; i++){
        string partner;
        cin >> partner;
        if (std::find(group1, group1+N, partner) != group1+N){
            cout << "bad";
            return 0;
        }
    }

    return 0;
}