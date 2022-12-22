/*
Code by Yash Jain
Problem: 2011 J1 Which Alien?
Time Complexity : O(1)
Method: If statements
Difficulty: 1/10
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);  <- Can't use this in conversational programs
    cin.tie(NULL);

    int antennas, eyes;
    cout << "How many antennas?\n";
    cin >> antennas;
    cout << "How many eyes?\n";
    cin >> eyes;

    if (antennas>=3 && eyes<=4) cout << "TroyMartian\n";
    if (antennas<=6 && eyes>=2) cout << "VladSaturnian\n";
    if (antennas<=2 && eyes<=3) cout << "GraemeMercurian\n";

    return 0;
}