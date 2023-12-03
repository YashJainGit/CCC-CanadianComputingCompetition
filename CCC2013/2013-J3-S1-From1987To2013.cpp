#include <bits/stdc++.h>
using namespace std;

int Y;
bool uniqueY(){
    string year = to_string(Y);
    for (char digit : year){
        if (count(year.begin(), year.end(), digit)>1){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> Y;
    do Y++; while (!uniqueY());
    cout << Y;
    return 0;
}