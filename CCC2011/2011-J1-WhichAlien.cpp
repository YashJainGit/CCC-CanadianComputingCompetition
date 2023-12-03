#include <bits/stdc++.h>
using namespace std;

void solve(){
    int antennas, eyes;
    cout << "How many antennas?\n";
    cin >> antennas;
    cout << "How many eyes?\n";
    cin >> eyes;

    if (antennas>=3 && eyes<=4) cout << "TroyMartian\n";
    if (antennas<=6 && eyes>=2) cout << "VladSaturnian\n";
    if (antennas<=2 && eyes<=3) cout << "GraemeMercurian\n";
}

int main()
{
    // ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}