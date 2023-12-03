#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K, m;
    cin >> K >> m;
    vector<int> friends(K);
    std::iota(friends.begin(), friends.end(), 1);

    for (int i=0; i<friends.size(); i++){
        cout << friends[i] << ' ';
    }

    cout << "worked";
    for (int i=0; i<m; i++){
        int r;
        cin >> r;
        for (int j=friends.size()-1; j>=0; j-=r){
            friends.erase(friends.begin()+j);
        }
    }

    cout << "worked";
    for (int i=0; i<friends.size(); i++){
        cout << friends[i] << ' ';
    }
    return 0;

}