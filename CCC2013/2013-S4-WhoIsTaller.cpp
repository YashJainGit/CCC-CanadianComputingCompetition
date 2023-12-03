/*
Code by Yash Jain
Problem: 2013 S4 Who is taller
Time Complexity : O(N)
Method:
Difficulty: 7/10
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> comparisons(0);
//Function compare traverses through comparisons to check if it can connect a and b
bool compare(int a, int b){
    if (a==b){
        return true;
    }
    for (int i : comparisons[a]){
        if (compare(i, b)) return true;
    }
    return false;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, p, q;
    cin >> N >> M;
    comparisons.resize(N+1, {});
    for (int i=0; i<M; i++){
        int x, y;
        cin >> x >> y;
        comparisons[y].push_back(x);           //Makes where y points to all nodes taller
    }
    cin >> p >> q;
    if (compare(q, p)) cout << "yes";    //Check if p is taller than q
    else if (compare(p, q)) cout << "no";//Check if q is taller than p
    else cout << "unknown";                    //If neither, it can't be determined
    return 0;
}