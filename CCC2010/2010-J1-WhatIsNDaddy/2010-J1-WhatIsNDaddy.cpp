/*
Code by Yash Jain
Problem: 2010 J1 What is n, Daddy?
Time Complexity : O(1)
Method: Calculation
Difficulty: 2/10
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count=0;
    cin >> n;

    for (int i=0; i<n; i++){
        if (i<=n-i && n-i<=5){
            count++;
        }
    }

    cout << count;
    return 0;
}