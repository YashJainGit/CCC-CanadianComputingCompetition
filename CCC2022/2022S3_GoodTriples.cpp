#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, c;
    cin >> n >>c; 

    int a[n];
    for ( int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    
    return 0;    
}